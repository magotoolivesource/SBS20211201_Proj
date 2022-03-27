using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class GameManager : MonoBehaviour
{



    public bool[] BoolArray = new bool[5];

    public int ArraySize = 4; // 12
    public int BoomCount = 3; // 5


    public bool[,] BoolArray2By;
    //public bool[][] BoolArray2By2;


    public GameObject OriginalObj;
    public GameObject NormalBlock;
    public int BlockSize = 4;
    public int MineCount = 4;



    public bool ISMine(int p_x, int p_y)
    {
        if( p_x < 0 || p_y < 0 )
            return false;

        if( p_x >= BlockSize || p_y >= BlockSize)
            return false;

        return BoolArray2By[p_y, p_x];
    }

    public int GetAroundMineCount(int p_x, int p_y)
    {
        // 2, 2
        int resultmine = 0;

        // 상단
        int xx, yy;
        xx = p_x - 1;
        yy = p_y + 1;

        if( ISMine(p_y + 1, p_x - 1) ) { ++resultmine; }
        if (ISMine(p_y + 1, p_x )) { ++resultmine; }
        if (ISMine(p_y + 1, p_x + 1)) { ++resultmine; }

        // 중단 비교
        if (ISMine(p_y, p_x + 1)) { ++resultmine; }
        if (ISMine(p_y, p_x - 1)) { ++resultmine; }

        // 하단
        if (ISMine(p_y - 1, p_x - 1)) { ++resultmine; }
        if (ISMine(p_y - 1, p_x)) { ++resultmine; }
        if (ISMine(p_y - 1, p_x + 1)) { ++resultmine; }

        return resultmine;
    }


    void RandomoutVal()
    {
        List<int> atlist = new List<int>();
        for (int i = 0; i < BlockSize * BlockSize; i++)
        {
            atlist.Add(i);
        }


        for (int i = 0; i < MineCount; i++)
        {
            int at = Random.Range(0, atlist.Count);
            int arrat = atlist[at];
            BoolArray2By[arrat % BlockSize, arrat / BlockSize] = true;

            atlist.RemoveAt(arrat);
        }
        
    }


    void Start()
    {







        //OriginalObj.gameObject.name = "이름";
        //OriginalObj.name = "이름";



        // 유니티 복사 명령어
        //GameObject copyobj = GameObject.Instantiate( OriginalObj );
        //copyobj.transform.position = new Vector3(10, 0, 0);





        // https://github.com/magotoolivesource/SBS20211201_Proj
        // [ w,z,y,x ]
        // 4개만 랜덤하게 true가 되도록 하기
        BoolArray2By = new bool[BlockSize, BlockSize];



        MineCount = 0;

        // 지뢰블럭
        int tempcount = 0;
        while(true)
        {

            // 마인 카운트 하는곳
            if (tempcount >= MineCount)
            {
                break;
            }


            int xat = Random.Range(0, BlockSize);
            int yat = Random.Range(0, BlockSize);

            //xat = 1;
            //yat = 1;

            if ( !BoolArray2By[yat, xat] )
            {
                BoolArray2By[yat, xat] = true;
                tempcount += 1;
                Debug.Log( $"지뢰등록 : {yat}, {xat} " );

                // 이름은 지뢰_[x, y]
                // $"지뢰_[{xat}, {yat}]";

                //// 지뢰있는 블럭 복사
                //GameObject copyobj = GameObject.Instantiate(OriginalObj);
                //copyobj.transform.position = new Vector3(xat, yat, 0);
                //copyobj.name = $"지뢰_[{xat}, {yat}]";
            }

            
        }


        // 테스트 세팅용
        BoolArray2By[1, 1] = true;
        BoolArray2By[3, 3] = true;
        BoolArray2By[2, 4] = true;







        // 일반블럭들 만들기
        for (int y = 0; y < BlockSize; y++)
        {
            for (int x = 0; x < BlockSize; x++)
            {
                if( BoolArray2By[y, x] == false )
                {
                    GameObject tempcopy = GameObject.Instantiate(NormalBlock);
                    tempcopy.transform.position = new Vector3(x, y, 0);
                    tempcopy.name = $"일반_[{x}, {y}]";
                }
                else
                {
                    // 지뢰있는 블럭 복사
                    GameObject copyobj = GameObject.Instantiate(OriginalObj);
                    copyobj.transform.position = new Vector3(x, y, 0);
                    copyobj.name = $"지뢰_[{x}, {y}]";
                }
            }
        }


        OriginalObj.gameObject.SetActive(false);
        NormalBlock.gameObject.SetActive(false);



        int tminecount = GetAroundMineCount(2, 2);
        int tminecount2 = GetAroundMineCount(3, 3);
        int tminecount3 = GetAroundMineCount(0, 0);




        //if ( ArraySize <= BoomCount )
        //{
        //    // 잘못된 값입니다.
        //    BoomCount = ArraySize - 1;
        //}
        //BoolArray = new bool[ArraySize];

        //int boolcount = 0;
        ////for (int i = 0; i < 9999999; i++)
        //while (true)
        //{
        //    int at = Random.Range(0, ArraySize);// 2
        //    if (BoolArray[at] == false)
        //    {
        //        BoolArray[at] = true;
        //        boolcount += 1;
        //    }

        //    if (boolcount >= BoomCount)
        //        break;
        //}



        /// 0, 3번째 bool값 true하기
        //BoolArray[0] = true;
        //BoolArray[3] = true;





        // 3개를 false 해야지 됨
        //int at = Random.Range(0, 5);// 2
        //BoolArray[at] = true;
        //boolcount += 1;
        // 나머지 1개 처리








        /// 랜덤하게 bool값 true하기
        //int at = Random.Range(0, 5);

        //bool isval = BoolArray[0];


    }

    void Update()
    {
        
    }
}
