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
    public int BlockSize = 4;
    public int MineCount = 4;
    void Start()
    {

        OriginalObj.gameObject.name = "이름";



        // 유니티 복사 명령어
        //GameObject copyobj = GameObject.Instantiate( OriginalObj );
        //copyobj.transform.position = new Vector3(10, 0, 0);





        // https://github.com/magotoolivesource/SBS20211201_Proj
        // [ w,z,y,x ]
        // 4개만 랜덤하게 true가 되도록 하기
        BoolArray2By = new bool[4,4];

        int tempcount = 0;
        while(true)
        {
            int xat = Random.Range(0, 4);
            int yat = Random.Range(0, 4);
            if( !BoolArray2By[yat, xat] )
            {
                BoolArray2By[yat, xat] = true;
                tempcount += 1;
                Debug.Log( $"지뢰등록 : {yat}, {xat} " );

                // 이름은 지뢰_[x, y]
                // $"지뢰_[{xat}, {yat}]";

                // 지뢰있는 블럭 복사
                GameObject copyobj = GameObject.Instantiate(OriginalObj);
                copyobj.transform.position = new Vector3(xat, 0, yat);
            }
            if( tempcount >= 4)
            {
                break;
            }
        }


        OriginalObj.gameObject.SetActive(false);




        if ( ArraySize <= BoomCount )
        {
            // 잘못된 값입니다.
            BoomCount = ArraySize - 1;
        }
        BoolArray = new bool[ArraySize];

        int boolcount = 0;
        //for (int i = 0; i < 9999999; i++)
        while (true)
        {
            int at = Random.Range(0, ArraySize);// 2
            if (BoolArray[at] == false)
            {
                BoolArray[at] = true;
                boolcount += 1;
            }

            if (boolcount >= BoomCount)
                break;
        }



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
