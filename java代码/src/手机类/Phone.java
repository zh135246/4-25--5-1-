package 手机类;

public class Phone {
	String brand;
	int price;
    String color;
	public void call(String name) {
        System.out.println("给"+name+"打电话");
	}
	public void send(String name) {
	    System.out.println("给"+name+"发消息");
	}
	public void play() {
	    System.out.println("玩游戏");
	}
}
