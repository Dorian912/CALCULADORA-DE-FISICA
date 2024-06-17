#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926536
int main()
{
    printf("CALCULADORA DE FISICA\n");
	printf("MANUFACTURA ASISTIDA POR COMPUTADORA\n");
    printf("INFORMATICA APLICADA\n");
    printf("INSTITUTO POLITECNICO NACIONAL\n");
    printf("MAYORGA MERAZ EDUARDO DORIAN ALAIN\n");
    printf("CECYT NO 3 ESTANISLAO RAMIREZ RUIZ\n");
    printf("4IM11\n");
    printf("2023030972\n");
    printf("PROYECTO FINAL \n");
    printf("29 DE ABRIL DEL 2024\n");
    printf("ALEJANDRINA GONZALES MORALES\n");
    printf("EDMUNDO CRUZ PEREZ Y IVON DURRAN TORRES\n\n\n\n");
  
    int opc = 0, expresion;
    while (opc != 10) {
        printf("Selecciona el tema de Dinamica que te interesa calcular \n");
        printf(" 1. Leyes de Newton \n 2. Rozamiento  \n 3. Trabajo \n 4. Energia \n 5. Cantidad de movimiento \n 6. Elasticidad \n 10. Salir\n");
        scanf("%d", &expresion);

        switch (expresion) {
    case 1: {
                int opcion;
                do {
                    printf("Vamos a Leyes de Newton \n");
                    printf("¿Qué quieres calcular?\n");
                    printf(" 1. Ley  \n 2. Ley \n 3. Ley \n 0. Volver al menú principal \n");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1: {
                            {
                int opcion;
                do {
                    printf("Vamos a la primera ley \n");
                    printf(" 1. Teoria  \n 2. calcular fuerza \n 3. calcular masa \n 4. calcular aceleracion \n 0. Volver al menú principal \n");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1: {
                        
                    printf("primera ley de Newton ");
                    printf("Primera Ley de Movimiento de Newton (Ley de la Inercia):\n");
                    printf("Todo cuerpo persevera en su estado de reposo o movimiento uniforme en linea recta,\n");
                    printf("a no ser que sea obligado a cambiar ese estado por fuerzas netas impresas sobre el.\n");
                    printf("La tendencia de un cuerpo a resistir un cambio en su movimiento se llama inercia.\n");
                                    
									system("pause");
                                    system("cls");
							break;
                        }
                        case 2: {
                            float masa, aceleracion;
                            printf("Ingresa el valor de tu masa y aceleracion: ");
                            scanf("%f %f", &masa, &aceleracion);
                            printf("Tu fuerza es: %.3f\n", masa*aceleracion);
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 3: {
                            float fuerza, aceleracion;
                            printf("Ingresa el valor de tu fuerza y aceleracion: ");
                            scanf("%f %f", &fuerza, &aceleracion);
                            printf("Tu masa es: %.2f\n", fuerza / aceleracion);
                                    system("pause");
                                    system("cls");
							break;
                        }
                            case 4: {
                            float fuerza, masa;
                            printf("Ingresa el valor de tu fuerza y masa: ");
                            scanf("%f %f", &fuerza, &masa);
                            printf("Tu aceleracion es: %.2f\n", fuerza / masa);
                                    system("pause");
                                    system("cls");
							break;
                        }
						case 0:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opcion no valida, por favor intenta de nuevo.\n");
                            break;
                    }
                } while (opcion != 0);

                break; // Rompe el switch del menú principal y continúa el bucle while
            }
							break;
                        }
                        case 2: {
                            {
                int opcion;
                do {
                    printf("Vamos a la segunda ley \n");
                    printf(" 1. Teoria  \n 2. calcular peso \n 3. calcular masa \n 4. calcular gravedad \n 0. Volver al menú principal \n");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1: {
                        
                            printf("segunda ley de Newton ");
                            printf("Esta ley plantea que la fuerza neta aplicada sobre un objeto es directamente proporcional\n");
                            printf("a la aceleracion que este adquiere en su trayectoria. Es decir, establece que un cuerpo\n");
                            printf("acelera cuando se le aplica una fuerza para moverlo.\n");

                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 2: {
                            float masa, gravedad;
                            printf("Ingresa el valor de tu masa y gravedad: ");
                            scanf("%f %f", &masa, &gravedad);
                            printf("Tu peso es: %.3f\n", masa*gravedad);
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 3: {
                            float peso, gravedad;
                            printf("Ingresa el valor de tu peso y gravedad: ");
                            scanf("%f %f", &peso, &gravedad);
                            printf("Tu masa es: %.3f\n", peso / gravedad);
                                    system("pause");
                                    system("cls");
							break;
                        }
                            case 4: {
                            float peso, masa;
                            printf("Ingresa el valor de tu peso y masa: ");
                            scanf("%f %f", &peso, &masa);
                            printf("Tu gravedad es: %.3f\n", peso / masa);
                                    system("pause");
                                    system("cls");
							break;
                        }
						case 0:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opcion no valida, por favor intenta de nuevo.\n");
                            break;
                    }
                } while (opcion != 0);

                break; 
            }
							break;
                        }
                        case 3: {
                            {
                int opcion;
                do {
                    printf("Vamos a la tercera ley \n");
                    printf(" 1. Teoria  \n 0. Volver al menú principal \n");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1: {
                        
                            printf("segunda ley de Newton ");
                            printf("Tercera Ley de Newton:\n");
                            printf("Si un objeto A ejerce una fuerza sobre un objeto B,\n");
                            printf("entonces el objeto B debe ejercer una fuerza de igual magnitud\n");
                            printf("en direccion opuesta sobre el objeto A.\n");
                                    
									system("pause");
                                    system("cls");
							break;
                        }
                        
						case 0:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opcion no valida, por favor intenta de nuevo.\n");
                            break;
                    }
                } while (opcion != 0);

                break; 
            }
						
						
							break;
                        }
                        case 0:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opcion no valida, por favor intenta de nuevo.\n");
                            break;
                    }
                } while (opcion != 0);

                break; 
            }

case 2: {
                int opcion;
                do {
                    printf("Rozamiento \n");
                    printf(" 1. Teoria  \n 2. calcular fuerza \n 3. calcular masa \n 4. calcular aceleracion \n 0. Volver al menú principal \n");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1: {
                        
                            printf("Rozamiento ");
                            printf("La fuerza de rozamiento, tambien conocida como fuerza de friccion, se da cuando hay dos cuerpos en contacto.\n");
                            printf("Este fenomeno permite estudiar el movimiento de estos, y es de dos tipos: estatica y dinamica.\n");
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 2: {
                            float friccion, fuerzan;
                            printf("Ingresa el valor de tu coeficiente de friccion y fuerza normal: ");
                            scanf("%f %f", &friccion, &fuerzan);
                            printf("Tu fuerza de friccion es: %.3f\n", friccion*fuerzan);
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 3: {
                            float fuerzaf , fuerzan;
                            printf("Ingresa el valor de tu fuerza de friccion y fuerza normal: ");
                            scanf("%f %f", &fuerzaf, &fuerzan);
                            printf("Tu coeficiente de rozamiento es: %.3f\n", fuerzaf / fuerzan);
                                    system("pause");
                                    system("cls");
							break;
                        }
                            case 4: {
                            float fuerzaf, friccion;
                            printf("Ingresa el valor de tu fuerza de friccion y fuerza normal: ");
                            scanf("%f %f", &fuerzaf, &friccion);
                            printf("Tu fuerza normal es: %.3f\n", fuerzaf / friccion);
                                    system("pause");
                                    system("cls");
							break;
                        }
						case 0:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opcion no valida, por favor intenta de nuevo.\n");
                            break;
                    }
                } while (opcion != 0);

                break; 
            }
						

case 3: {
                            {
                int opcion;
                do {
                    printf("Trabajo \n");
                    printf(" 1. Teoria  \n 2. Calcular trabajo \n 3. Calcular trabajo con angulo \n 0. Volver al menú principal \n");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1: {
                        
                            printf("Trabajo ");
                            printf("En mecanica clasica, se dice que una fuerza realiza un trabajo cuando hay un desplazamiento\n");
                            printf("del centro de masas del cuerpo sobre el que se aplica la fuerza, en la direccion de dicha fuerza.\n");
                            printf("El trabajo de la fuerza sobre ese cuerpo sera equivalente a la energia necesaria para desplazarlo.\n");
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 2: {
                            float fuerza, distancia;
                            printf("Ingresa el valor de tu fuerza y distancia: ");
                            scanf("%f %f", &fuerza, &distancia);
                            printf("Tu trabajo es: %.3f\n", fuerza*distancia);
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 3: {
                            float x, coseno, rad, fuerza, distancia;
                            printf("Ingresa el valor de tu angulo: ");
                            scanf("%f", &x);
                            printf("Ingresa el valor de tu fuerza y distacia: ");
                            scanf("%f %f", &fuerza,&distancia);
						    rad=x*PI/180; 
							coseno=cos(rad);
							printf("Tu Trabajo es: %.3f\n", fuerza*distancia*coseno);
                                    system("pause");
                                    system("cls");
							break;
                        }
						case 0:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opcion no valida, por favor intenta de nuevo.\n");
                            break;
                    }
                } while (opcion != 0);

                break; 
            }
							break;
                        }

case 4: {
                            {
                int opcion;
                do {
                    printf("Energia \n");
                    printf(" 1. Teoria  \n 2. calcular energia \n 3. Calcular energia potencial \n 4. Calcular energia cinetica \n 5. Calcular potencial \n 6. Calcular potencial con fuerza y velocidad \n 0. Volver al menú principal \n");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1: {
                        
                            printf("Energia ");
                            printf("La energia es la capacidad de realizar un trabajo, es decir, para hacer cualquier cosa que implique un cambio\n");
                            printf("(un movimiento, una variacion de temperatura, una transmision de ondas, etc.),\n");
                            printf("es necesaria la intervencion de la energia.\n");
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 2: {
                            float masa, luz;
                            printf("Ingresa el valor de tu masa y velocidad de la luz: ");
                            scanf("%f %f", &masa, &luz);
                            printf("Tu energia es: %.3f\n", masa*(luz*luz));
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 3: {
                            float m, g, h;
                            printf("Ingresa el valor de tu masa, gravedad y altura: ");
                            scanf("%f %f %f", &m, &g, &h);
							printf("Tu energia potencial es: %.3f\n", m*g*h);
                                    system("pause");
                                    system("cls");
							break;
                        }
						
						case 4: {
                            float m, v;
                            printf("Ingresa el valor de tu masa y velocidad: ");
                            scanf("%f %f", &m, &v);
							printf("Tu energia cinetica es: %.3f\n", (m/2)*(v*v));
                                    system("pause");
                                    system("cls");
							break;
                        }
						
						case 5: {
                            float t, p;
                            printf("Ingresa el valor de tu Trabajo y potencia: ");
                            scanf("%f %f", &t, &p);
							printf("Tu potencia es: %.3f\n", t/p);
                                    system("pause");
                                    system("cls");
							break;
                        }
                        
						case 6: {
                            float f, v;
                            printf("Ingresa el valor de tu fuerza y velocidad: ");
                            scanf("%f %f", &f, &v);
							printf("Tu potencia es: %.3f\n", f*v);
                                    system("pause");
                                    system("cls");
							break;
                        }
						
						case 0:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opcion no valida, por favor intenta de nuevo.\n");
                            break;
                    }
                } while (opcion != 0);

                break; 
            }
							break;
                        }
case 5:{
            {
                int opcion;
                do {
                    printf("Cantidad de movimiento \n");
                    printf(" 1. Teoria  \n 2. calcular cantidad de movimiento \n 3. Calcular impetu \n 4. Calcular coeficiente de restitucion \n 0. Volver al menú principal \n");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        
						case 1: {
                        
                            printf("cantidad de movimiento ");
                            printf("La cantidad de movimiento, momento lineal, impetu, momentum o simplemente momento,\n");
                            printf("es una magnitud fisica derivada de tipo vectorial que describe el movimiento de un cuerpo\n");
                            printf("en cualquier teoria mecanica.\n");
                                    system("pause");
                                    system("cls");
							break;
                        }
                        
						case 2: {
                            float masa, v;
                            printf("Ingresa el valor de tu masa y velocidad: ");
                            scanf("%f %f", &masa, &v);
                            printf("Tu cantidad de movimiento es: %.3f\n", masa*v);
                                    system("pause");
                                    system("cls");
							break;
                        }
                       
					    case 3: {
                            float f, t;
                            printf("Ingresa el valor de tu fuerza y tiempo: ");
                            scanf("%f %f", &f, &t);
                            printf("Tu impetu es: %.3f\n", f*t);
                                    system("pause");
                                    system("cls");
							break;
                        }
						
						case 4: {
                            float vd, vu, uu, ud;
                            printf("Ingresa el valor de la velocidad de los cuerpos 1 y 2 antes del choque: ");
                            scanf("%f %f", &uu, &ud);
							printf("Ingresa el valor de la velocidad de los cuerpos 1 y 2 despues del choque: ");
                            scanf("%f %f", &vu, &vd);
							printf("Tu Calcular coeficiente de restitucion es: %.3f\n", (vd-vu)/(uu-ud));
                                    system("pause");
                                    system("cls");
							break;
                        }
						
						case 0:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opcion no valida, por favor intenta de nuevo.\n");
                            break;
                    }
                } while (opcion != 0);

                break; 
            }
							break;
                        }
case 6: {
                            {
                int opcion;
                do {
                    printf("Elasticidad \n");
                    printf(" 1. Teoria  \n 2. calcular esfuerzo \n 3. Calcular deformacion unitaria \n 4. Calcular modulo de young \n 5. Calcular ley de hook \n  0. Volver al menú principal \n");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1: {
                        
                            printf("Elasticidad ");
                            printf("En fisica, el termino elasticidad se refiere a la propiedad fisica y mecanica de ciertos materiales\n");
                            printf("que al sufrir deformaciones tienen la capacidad de ser reversibles, cuando se encuentran sujetos\n");
                            printf("a la accion de fuerzas exteriores y de recuperar la forma original si estas fuerzas exteriores se eliminan.\n");
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 2: {
                            float f, a;
                            printf("Ingresa el valor de tu masa y velocidad de la luz: ");
                            scanf("%f %f", &f, &a);
                            printf("Tu esfuerzo es: %.3f\n", f/a);
                                    system("pause");
                                    system("cls");
							break;
                        }
                        case 3: {
                            float lf, li;
                            printf("Ingresa el valor de tu longitud final y longitud inicial: ");
                            scanf("%f %f", &lf, &li);
							printf("Tu deformacion unitaria es: %.3f\n", lf/li);
                                    system("pause");
                                    system("cls");
							break;
                        }
						
						case 4: {
                            float e, du;
                            printf("Ingresa el valor de tu esfuerzo y deformacion unitaria: ");
                            scanf("%f %f", &e, &du);
							printf("Tu modulo de young es: %.3f\n", e/du);
                                    system("pause");
                                    system("cls");
							break;
                        }
						
						case 5: {
                            float k, x;
                            printf("Ingresa el valor de tu constante del resorte y elongacion del resorte: ");
                            scanf("%f %f", &k, &x);
							printf("Tu fuerza de restitucion del resorte es: %.3f\n", k*x);
                                    system("pause");
                                    system("cls");
							break;
                        }
                        
						case 0:
                            printf("Volviendo al menú principal.\n");
                            break;
                        default:
                            printf("Opcion no valida, por favor intenta de nuevo.\n");
                            break;
                    }
                } while (opcion != 0);

                break; 
            }
							break;
                        }
           
case 10:
                printf("Saliendo del programa.\n");
                opc = 10; 
                break;

default:
                printf("Opción no válida, por favor intenta de nuevo.\n");
                break;
        }

        system("pause");
        system("cls");
    }

    return 0;
}
