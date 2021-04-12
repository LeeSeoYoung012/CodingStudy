package LiveCodingStudy;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class leetcodeOne {

    static int [] arr = {-2,1,-3,4,-1,2,1,-5,4};

    static int max = -9999;


    public static void main(String[] args) throws IOException {

        int totalMax = -9999;
        //int []dp = new int[arr.length];
        int num;
        int answer = arr[0];
        num = arr[0];
        for(int i=1; i<arr.length; i++){

            if(arr[i]>(num+arr[i])){
                num= arr[i];
            }
            else{
                num = num+ arr[i];
            }

            if(num>answer){
                answer = num;
            }

        }


        System.out.println(answer);

        }

}
