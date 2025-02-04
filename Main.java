import java.util.Scanner;

class Girl {
    void hug() {
        System.out.println("抱抱~ (づ′▽`)づ ");
    }
    void hand() {
        System.out.println("牵牵手~╭(●｀∀´●)╯╰(●’◡’●)╮");
    }
    void kiss() {
        System.out.println("(๑˘₃˘๑) mua~");
    }
}

public class Main {
    public static void main(String[] args) {
        // 初始化
        Scanner in = new Scanner(System.in); // 将 Scanner 对象移到循环外部，避免重复创建
        // 程序主体
        System.out.println("宝贝你好呀！要和我说些什么？");
        System.out.println("(灬ºωº灬)♡");
        try {
            for (int i = 0; i < 3; i++) {
                String input = in.nextLine();
                Girl girlfriend = new Girl();
                // 输出
                if (input.contains("抱")) {
                    girlfriend.hug();
                } else if (input.contains("手")) {
                    girlfriend.hand();
                } else if (input.contains("亲")) {
                    girlfriend.kiss();
                }
            }
        } finally {
            in.close(); // 确保 Scanner 对象在使用完毕后被关闭
        }
    }
}
