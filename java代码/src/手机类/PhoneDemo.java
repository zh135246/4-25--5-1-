package 手机类;

public class PhoneDemo {
public static void main(String[] args) {
	Phone stu= new Phone();
	stu.brand="华为";
	stu.color="黑色";
    stu. price=4500;
	System.out.println(stu.brand);
	System.out.println(stu.color);
	System.out.println(stu.price);
	stu.call("成龙");
	stu.send("黄晓明");
	stu.play();
}
}
