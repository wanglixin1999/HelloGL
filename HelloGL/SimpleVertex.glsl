attribute vec4 Position; // 1
attribute vec4 SourceColor; // 2

varying vec4 DestinationColor; // 3

// Add right before the main
uniform mat4 Projection;


// Add right after the Projection uniform
uniform mat4 Modelview;


void main(void) { // 4
    DestinationColor = SourceColor; // 5
//    gl_Position = Position; // 6
    
    // Modify gl_Position line as follows
//    gl_Position = Projection * Position;
    
    
    // Modify the gl_Position line
    gl_Position = Projection * Modelview * Position;
}