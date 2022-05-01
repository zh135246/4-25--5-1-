package 第三周代码;

public class 代码02数组的最小项及其索引 {
public static void main(String[] args) {
	int [][]arr= {{1,55,-6},{34,59,86,13,-4},{100,75,32,25}};
	int i,j;
	System.out.println("二维数组元素如下：");
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
				System.out.println("元素最小值："+arr[i][j]);
				System.out.println("元素最小值所在行："+i);
				System.out.println("元素最小值所在列:"+j);
		}
		}
	}
	
}
}
