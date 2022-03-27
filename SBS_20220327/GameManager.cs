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

    void Start()
    {
        // [ w,z,y,x ]

        // 4���� �����ϰ� true�� �ǵ��� �ϱ�
        BoolArray2By = new bool[4,4];
        BoolArray2By[0, 0] = true;
        BoolArray2By[0, 2] = true;
        BoolArray2By[2, 1] = true;


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
