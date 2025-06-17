interface EventListener{
    public void perfomEvent();
}
interface MouseListener extends EventListener{
    void mouseClicked();
    void mousePressed();
    void mouseReleased();
    void mouseMoved();
    void mouseDragged();
}
interface KeyListener extends EventListener{
    void keyPressed();
    void keyReleased();
}
class EventDemo implements MouseListener,KeyListener{
    public void perfomEvent(){
        System.out.println("Perform Event called");
    }
    public void mouseClicked(){
        System.out.println("Mouse Clicked called");
    }
    public void mousePressed(){
        System.out.println("Mouse Pressed called");
    }
    public void mouseReleased(){
        System.out.println("Mouse Released called");
    }
    public void mouseMoved(){
        System.out.println("Mouse Moved called");
    }
    public void mouseDragged(){
        System.out.println("Mouse Dragged called");
    }
    public void keyPressed(){
        System.out.println("Key Presseed called");
    }
    public void keyReleased(){
        System.out.println("Key Released called");
    }
}

public class L9_A_4{
    public static void main(String[] args){
        EventDemo e1=new EventDemo();
        e1.perfomEvent();
        e1.mouseClicked();
        e1.mousePressed();
        e1.mouseReleased();
        e1.mouseMoved();
        e1.mouseDragged();
        e1.keyPressed();
        e1.keyReleased();
    }
}