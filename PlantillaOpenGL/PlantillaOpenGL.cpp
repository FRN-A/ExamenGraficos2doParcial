// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include "Shader.h"
#include "Vertice.h"
#include "Modelo.h"

using namespace std;

Shader *shader;
GLuint posicionID;
GLuint colorID;

Modelo *alien;

void inicializarCuadrado() {
	alien = new Modelo();

	//cara
	Vertice v1 = {
		vec3(-0.25,0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v2 = {
		vec3(-0.25,-0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v3 = {
		vec3(0.25,-0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v4 = {
		vec3(0.25,0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v5 = {
		vec3(-0.15,0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v6 = {
		vec3(-0.15,0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v7 = {
		vec3(0.15,0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v8 = {
		vec3(0.15,0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v9 = {
		vec3(-0.25,0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v10 = {
		vec3(-0.25,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v11 = {
		vec3(0.25,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v12 = {
		vec3(0.25,0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v13 = {
		vec3(-0.35,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v14 = {
		vec3(-0.25,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v15 = {
		vec3(-0.25,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v16 = {
		vec3(-0.35,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v17 = {
		vec3(0.35,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v18 = {
		vec3(0.25,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v19 = {
		vec3(0.25,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v20 = {
		vec3(0.35,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};

	alien->vertices.push_back(v1);
	alien->vertices.push_back(v2);
	alien->vertices.push_back(v3);
	alien->vertices.push_back(v4);
	alien->vertices.push_back(v5);
	alien->vertices.push_back(v6);
	alien->vertices.push_back(v7);
	alien->vertices.push_back(v8);
	alien->vertices.push_back(v9);
	alien->vertices.push_back(v10);
	alien->vertices.push_back(v11);
	alien->vertices.push_back(v12);
	alien->vertices.push_back(v13);
	alien->vertices.push_back(v14);
	alien->vertices.push_back(v15);
	alien->vertices.push_back(v16);
	alien->vertices.push_back(v17);
	alien->vertices.push_back(v18);
	alien->vertices.push_back(v19);
	alien->vertices.push_back(v20);

	//boca
	Vertice v21 = {
		vec3(0.25,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v22 = {
		vec3(0.05,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v23 = {
		vec3(0.05,-0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v24 = {
		vec3(0.25,-0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v25 = {
		vec3(-0.25,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v26 = {
		vec3(-0.05,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v27 = {
		vec3(-0.05,-0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v28 = {
		vec3(-0.25,-0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	alien->vertices.push_back(v21);
	alien->vertices.push_back(v22);
	alien->vertices.push_back(v23);
	alien->vertices.push_back(v24);
	alien->vertices.push_back(v25);
	alien->vertices.push_back(v26);
	alien->vertices.push_back(v27);
	alien->vertices.push_back(v28);

	//mano izquierda
	Vertice v29 = {
		vec3(-0.35,0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v30 = {
		vec3(-0.45,0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v31 = {
		vec3(-0.45,0,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v32 = {
		vec3(-0.35,0,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v33 = {
		vec3(-0.45,0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v34 = {
		vec3(-0.55,0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v35 = {
		vec3(-0.55,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v36 = {
		vec3(-0.45,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	alien->vertices.push_back(v29);
	alien->vertices.push_back(v30);
	alien->vertices.push_back(v31);
	alien->vertices.push_back(v32);
	alien->vertices.push_back(v33);
	alien->vertices.push_back(v34);
	alien->vertices.push_back(v35);
	alien->vertices.push_back(v36);

	//mano derecha
	Vertice v37 = {
		vec3(0.35,0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v38 = {
		vec3(0.45,0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v39 = {
		vec3(0.45,0,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v40 = {
		vec3(0.35,0,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v41 = {
		vec3(0.45,0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v42 = {
		vec3(0.55,0.1,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v43 = {
		vec3(0.55,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v44 = {
		vec3(0.45,-0.2,0.0),
		vec4(0,0,0.5,1.0)
	};
	alien->vertices.push_back(v37);
	alien->vertices.push_back(v38);
	alien->vertices.push_back(v39);
	alien->vertices.push_back(v40);
	alien->vertices.push_back(v41);
	alien->vertices.push_back(v42);
	alien->vertices.push_back(v43);
	alien->vertices.push_back(v44);

	//antena izquierda
	Vertice v45 = {
		vec3(-0.15,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v46 = {
		vec3(-0.25,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v47 = {
		vec3(-0.25,0.4,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v48 = {
		vec3(-0.15,0.4,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v49 = {
		vec3(-0.25,0.4,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v50 = {
		vec3(-0.35,0.4,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v51 = {
		vec3(-0.35,0.5,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v52 = {
		vec3(-0.25,0.5,0.0),
		vec4(0,0,0.5,1.0)
	};
	alien->vertices.push_back(v45);
	alien->vertices.push_back(v46);
	alien->vertices.push_back(v47);
	alien->vertices.push_back(v48);
	alien->vertices.push_back(v49);
	alien->vertices.push_back(v50);
	alien->vertices.push_back(v51);
	alien->vertices.push_back(v52);

	//antena derecha
	Vertice v53 = {
		vec3(0.15,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v54 = {
		vec3(0.25,0.3,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v55 = {
		vec3(0.25,0.4,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v56 = {
		vec3(0.15,0.4,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v57 = {
		vec3(0.25,0.4,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v58 = {
		vec3(0.35,0.4,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v59 = {
		vec3(0.35,0.5,0.0),
		vec4(0,0,0.5,1.0)
	};
	Vertice v60 = {
		vec3(0.25,0.5,0.0),
		vec4(0,0,0.5,1.0)
	};
	alien->vertices.push_back(v53);
	alien->vertices.push_back(v54);
	alien->vertices.push_back(v55);
	alien->vertices.push_back(v56);
	alien->vertices.push_back(v57);
	alien->vertices.push_back(v58);
	alien->vertices.push_back(v59);
	alien->vertices.push_back(v60);
}

void dibujar() {
	//triangulo->dibujar(GL_TRIANGLES);
	alien->dibujar(GL_QUADS);
}

void actualizar() {

}

int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;
	
	//Si no se pudo iniciar glfw
	//terminamos ejcución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//entonces inicializamos la ventana
	window =
		glfwCreateWindow(800, 800, "Ventana", 
			NULL, NULL);
	//Si no podemos iniciar la ventana
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido  el contexto
	//Activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << 
			glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL =
		glGetString(GL_VERSION);
	cout << "Version OpenGL: "
		<< versionGL;

	inicializarCuadrado();

	const char *rutaVertex = 
		"VertexShader.shader";
	const char *rutaFragment = 
		"FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID =
		glGetAttribLocation(shader->getID(), "posicion");
	colorID =
		glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader
	shader->desenlazar();

	alien->shader = shader;
	alien->inicializarVertexArray(posicionID, colorID);

	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Esablecer region de dibujo
		glViewport(0, 0, 800, 800);
		//Establece el color de borrado
		glClearColor(0, 0, 0, 1);
		//Borramos
		glClear(
			GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

