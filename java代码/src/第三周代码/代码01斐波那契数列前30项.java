package �����ܴ���;

public class ����01쳲���������ǰ30�� {
public static void main(String[] args) {
	int []arr=new int [30];
	arr[0]=1;
	arr[1]=1;
	int i;
	for(i=2;i<arr.length;i++) {
		arr[i]=arr[i-1]+arr[i-2];
	}
	for(i=0;i<arr.length;i++) {
		if(i%6==0) {
			System.out.println();
		}
		System.out.print(arr[i]+"\t");
	}
}
}
