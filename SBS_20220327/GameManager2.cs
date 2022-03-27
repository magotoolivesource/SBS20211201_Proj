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

        OriginalObj.gameObject.name = "�̸�";



        // ����Ƽ ���� ��ɾ�
        //GameObject copyobj = GameObject.Instantiate( OriginalObj );
        //copyobj.transform.position = new Vector3(10, 0, 0);





        // https://github.com/magotoolivesource/SBS20211201_Proj
        // [ w,z,y,x ]
        // 4���� �����ϰ� true�� �ǵ��� �ϱ�
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
                Debug.Log( $"���ڵ�� : {yat}, {xat} " );

                // �̸��� ����_[x, y]
                // $"����_[{xat}, {yat}]";

                // �����ִ� �� ����
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
            // �߸��� ���Դϴ�.
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
