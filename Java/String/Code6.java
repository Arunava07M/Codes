//Given a route containing 4 directions(E, W, N, S) find the shortest path to reach the
//destination    "WNEENESENNN"
public class Code6 {
    public static float getShortestPath(String path){// Time Complexity O(n)
        int x = 0;
        int y = 0;
        for(int i = 0; i <= path.length() - 1; i++){
            char dir = path.charAt(i);
            //South
            if(dir == 'S'){
                y--;
            }
            //North
            else if (dir == 'N') {
                y++;
            }
            //West
            else if(dir == 'W'){
                x--;
            }
            //East
            else{
                x++;
            }
        }
        int X2 = x * x;
        int Y2 = y * y;
        return (float)Math.sqrt(X2 + Y2);
    }

    public static void main(String[] args) {
        String path = "NS";//"WNEENESENNN";
        System.out.println(getShortestPath(path));
    }
}
