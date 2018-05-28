package com.example.android.basta;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
        //System.loadLibrary("native-lib2");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        //char[] puntaje = new char[6];
        int[] puntaje= new int[6];
        puntaje[0]=1;
        puntaje[1]=1;
        puntaje[2]=0;
        puntaje[3]=1;
        puntaje[4]=0;
        puntaje[5]=0;
        //puntaje[6]='D';
                //LETRA,ANIMALES, COLORES, FRUTAS, CIUDADES, PAISES, PELICULAS
        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        arreglopuntaje crearrespuestas = new arreglopuntaje(puntaje);

        //System.out.println("Las respuestas en el arreglo: "+leerpuntaje(crearrespuestas.getRespuestas()));
        int[] respuestasdevueltas=crearrespuestas.getRespuestas();
        tv.setText("Primera posicion del arreglo que se envía:"+respuestasdevueltas[0]);

        //tv.setText(stringFromJNI());
        //tv.setText(leerpuntaje(crearrespuestas.getRespuestas()));
        TextView tv1 = (TextView) findViewById(R.id.textView2);
        //tv1.setText("Marcador de la ronda: "+leerpuntaje(respuestasdevueltas));
        //TextView tv1 = (TextView) findViewById(R.id.textView2);
        //tv1.setText(stringFromJNI2());
        tv1.setText(leerpuntaje(respuestasdevueltas));
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    //public native String stringFromJNI();
    //public native String stringFromJNI2();
    public native int leerpuntaje(int[] respuestas);
    }