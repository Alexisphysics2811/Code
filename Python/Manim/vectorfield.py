#Author: Rábago García Carlos Alexis
#Date: 17/10/2023

from manim import *
        
class VectorFieldTest(Scene):
    def construct(self):
        plane = NumberPlane().set_opacity(0.5)
        func = lambda pos: np.array([pos[0]*2, pos[1]*2])
        func2 = lambda pos: np.array([pos[1]*2, -pos[0]*2])
        colors = [RED, YELLOW, GREEN, BLUE, DARK_GRAY]
        vector_field = ArrowVectorField(
            func = func, 
            min_color_scheme_value=2, 
            max_color_scheme_value=10, 
            colors = colors
        )
        vector_field_2 = ArrowVectorField(
            func = func2, 
            min_color_scheme_value=2, 
            max_color_scheme_value=10, 
            colors = colors
        )
        self.add(plane)
        self.play(*[GrowArrow(vec) for vec in vector_field])
        self.wait(1)
        self.play(ReplacementTransform(vector_field,vector_field_2))
        self.wait(1)

#To render, execute the command ```$ manim scene1.py VectorFieldTest with the required libraries´´´