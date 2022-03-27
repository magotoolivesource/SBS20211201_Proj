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

        // ���
        int xx, yy;
        xx = p_x - 1;
        yy = p_y + 1;

        if( ISMine(p_y + 1, p_x - 1) ) { ++resultmine; }
        if (ISMine(p_y + 1, p_x )) { ++resultmine; }
        if (ISMine(p_y + 1, p_x + 1)) { ++resultmine; }

        // �ߴ� ��
        if (ISMine(p_y, p_x + 1)) { ++resultmine; }
        if (ISMine(p_y, p_x - 1)) { ++resultmine; }

        // �ϴ�
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







        //OriginalObj.gameObject.name = "�̸�";
        //OriginalObj.name = "�̸�";



        // ����Ƽ ���� ��ɾ�
        //GameObject copyobj = GameObject.Instantiate( OriginalObj );
        //copyobj.transform.position = new Vector3(10, 0, 0);





        // https://github.com/magotoolivesource/SBS20211201_Proj
        // [ w,z,y,x ]
        // 4���� �����ϰ� true�� �ǵ��� �ϱ�
        BoolArray2By = new bool[BlockSize, BlockSize];



        MineCount = 0;

        // ���ں�
        int tempcount = 0;
        while(true)
        {

            // ���� ī��Ʈ �ϴ°�
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
                Debug.Log( $"���ڵ�� : {yat}, {xat} " );

                // �̸��� ����_[x, y]
                // $"����_[{xat}, {yat}]";

                //// �����ִ� �� ����
                //GameObject copyobj = GameObject.Instantiate(OriginalObj);
                //copyobj.transform.position = new Vector3(xat, yat, 0);
                //copyobj.name = $"����_[{xat}, {yat}]";
            }

            
        }


        // �׽�Ʈ ���ÿ�
        BoolArray2By[1, 1] = true;
        BoolArray2By[3, 3] = true;
        BoolArray2By[2, 4] = true;







        // �Ϲݺ��� �����
        for (int y = 0; y < BlockSize; y++)
        {
            for (int x = 0; x < BlockSize; x++)
            {
                if( BoolArray2By[y, x] == false )
                {
                    GameObject tempcopy = GameObject.Instantiate(NormalBlock);
                    tempcopy.transform.position = new Vector3(x, y, 0);
                    tempcopy.name = $"�Ϲ�_[{x}, {y}]";
                }
                else
                {
                    // �����ִ� �� ����
                    GameObject copyobj = GameObject.Instantiate(OriginalObj);
                    copyobj.transform.position = new Vector3(x, y, 0);
                    copyobj.name = $"����_[{x}, {y}]";
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
        //    // �߸��� ���Դϴ�.
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



        /// 0, 3��° bool�� true�ϱ�
        //BoolArray[0] = true;
        //BoolArray[3] = true;





        // 3���� false �ؾ��� ��
        //int at = Random.Range(0, 5);// 2
        //BoolArray[at] = true;
        //boolcount += 1;
        // ������ 1�� ó��








        /// �����ϰ� bool�� true�ϱ�
        //int at = Random.Range(0, 5);

        //bool isval = BoolArray[0];


    }

    void Update()
    {
        
    }
}
