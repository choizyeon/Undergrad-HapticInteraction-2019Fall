void setup() {
  size(100, 100);
}

void draw() {
  background(204);
  line(0, 0, mouseX, mouseY); // starting position of line (0, 0)
                              // mouse postion is end postion of line
}

//save picture when mouse button is pressed (right or left button) 
void mousePressed() {
  save("line.jpg");
  println("saved...");
}
