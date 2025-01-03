
public class Test {
  public static void main(String[] args) {
    String name = "Sunday";

    switch (name) {
    case "Sunday":
      System.out.println("This is sunday!");
      break;
    case "Monday":
      System.out.println("This is monday");
      break;
    default:
      return;
    }
  }

  public static void printAddress(int[] arr) { System.out.println(arr); }
}