package �����ܴ���;

public class ����02�������С������� {
public static void main(String[] args) {
	int [][]arr= {{1,55,-6},{34,59,86,13,-4},{100,75,32,25}};
	int i,j;
	System.out.println("��ά����Ԫ�����£�");
	for(i=0;i<arr.length;i++) {
		for(j=0;j<arr[i].length;j++) {
			System.out.print(arr[i][j]+"\t");
		}
		System.out.println();
	}
	int min=arr[0][0];
	for(i=0;i<arr.length;i++) {
		for(j=0;j<arr[i].length;j++) {
			if(arr[i][j]<min) {
				min=arr[i][j];
				System.out.println("Ԫ����Сֵ��"+arr[i][j]);
				System.out.println("Ԫ����Сֵ�����У�"+i);
				System.out.println("Ԫ����Сֵ������:"+j);
		}
		}
	}
	
}
}
