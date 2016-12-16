package test;

import test.Vehicle;

import java.util.*;

public class HelloWorld {

    public static void main(String[] args) {
        
        String input = "((())))()";
        findIndex(input);
        
        LinkedList<String> list = new LinkedList<String>();
        list.add("hello");
        System.out.println("LinkedList:" + list);
        
        Vehicle test = new Vehicle(50, "west");
        test.setSpeed(30);
        System.out.println(test.getSpeed());
        
        System.out.println(findTheDifference("abcd", "abcde"));
        
        System.out.println("Hello World!!");
        System.out.println("test");
        System.out.println(fab(4));
        System.out.println(gcd(54, 24));
        System.out.println(gcd_while(54, 24));
        System.gc();
        Runtime r=Runtime.getRuntime();
        r.freeMemory();

        System.out.println(interleave(123, 123));
    }
    
    public static int fab(int num) {
        if (num <= 1) {
            return num;
        } else {
            return fab(num - 1) + fab(num - 2);
        }
    }
    
    public static int gcd(int v1, int v2) {
        if (v2 != 0)
            return gcd(v2, v1 % v2);
        else 
            return v1;
    }
    
    public static int gcd_while(int v1, int v2) {
        int tmp;
        while (v2 != 0) {
            tmp = v1 % v2; 
            v1 = v2;
            v2 = tmp;       
        }
        return v1;
    }
    
    public static char findTheDifference(String s, String t) {
        int n = t.length();
        char c = t.charAt(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            c ^= s.charAt(i);
            c ^= t.charAt(i);
        }
        return c;
    }
    
    public static int findIndex(String str) {
        int i;
        int len;
        int result = 0;
        int bias = 0;

        len = str.length();
        
        char array[] = str.toCharArray();
        
        for (i = 0; i < ((len/2) + 1); i++) {

            if (array[i] == '(') {
                bias--;
            }

            if (array[len - i - 1] == ')') {
                bias++;
            }
        }

        result = (len/2) + bias;

        System.out.println(result);
        return result;
    }

        public static int interleave(int A, int B) {
        int result;
        int commonLen, remainLen;
        int i;
        boolean isBiger;
        result = 0;
        
        String strA = String.valueOf(A);
        String strB = String.valueOf(B);
        String strC = new String();
        
        if (strA.length() > strB.length()) {
            commonLen = strB.length();
            remainLen = strA.length() - strB.length();
            isBiger = true;
        }
        else {
            commonLen = strA.length();
            remainLen = strB.length() - strA.length();
            isBiger = false;
        }

        for( i = 0; i < commonLen; i++) {
            strC = strC + strA.charAt(i) + strB.charAt(i);
        }
        
        for( i = 0; i < remainLen; i++) {
            if (isBiger) {
                strC = strC + strA.charAt(i+commonLen);
            } else {
                strC = strC + strB.charAt(i+commonLen);
            }
        }
        
        System.out.println(strC);
        
        return Integer.parseInt(strC);
    }
}
