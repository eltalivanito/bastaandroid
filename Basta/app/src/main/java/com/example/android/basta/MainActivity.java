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
        String[] puntaje = new String[6];
        puntaje[0]="D";
        puntaje[1]="DELFIN";
        puntaje[2]="DURAZNO";
        puntaje[3]="DURAZNO";
        puntaje[4]="DURANGO";
        puntaje[5]="DINAMARCA";
        puntaje[6]="DIA DE LA INDEPENDENCIA";
                //LETRA,ANIMALES, COLORES, FRUTAS, CIUDADES, PAISES, PELICULAS
        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        arreglopuntaje crearrespuestas = new arreglopuntaje(puntaje);

        System.out.println("Las respuestas en el arreglo: "+leerpuntaje(crearrespuestas.getRespuestas()));


        //tv.setText(stringFromJNI());
        //tv.setText(leerpuntaje(crearrespuestas.getRespuestas()));


        //TextView tv1 = (TextView) findViewById(R.id.textView2);
        //tv1.setText(stringFromJNI2());
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    //public native String stringFromJNI();
    //public native String stringFromJNI2();
    public native int leerpuntaje(String[] respuestas);
    }