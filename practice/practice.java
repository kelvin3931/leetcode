public class HelloWorld {

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.add("hello");
        list.add(10);
        System.out.println("LinkedList:" + list);
        
        int[] x = new int[100];
        
        
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
        char str1[];
        char str2[];
        
        char result='\0';
        str1 = s.toCharArray();
        Arrays.sort(str1);
        
        str2 = t.toCharArray();
        Arrays.sort(str2);
        
        System.out.println(str2.length);
        
        int i = 0;
        while(i < str2.length) {
            if (str2[i] != str1[i]) {
                return str2[i];
            }
            i++;
        }
        
        return result;
    }
}
