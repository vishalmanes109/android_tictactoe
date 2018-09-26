package com.example.vishal.tictactoe;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    public static final String EXTRA_MESSAGE = "com.example.TicTacToe.MESSAGE";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void setDarkMode(View view) {
        Intent intent = new Intent(this, PlayerData.class);
        //EditText editText = (EditText) findViewById(R.id.editText);
       // String message = editText.getText().toString();
        intent.putExtra(EXTRA_MESSAGE, "DarkMode");
        startActivity(intent);
    }

    public void setClasicMode(View view) {
        Intent intent = new Intent(this, PlayerData1.class);
        //EditText editText = (EditText) findViewById(R.id.editText);
        // String message = editText.getText().toString();
        intent.putExtra(EXTRA_MESSAGE, "ClasicMode");
        startActivity(intent);
    }

    public void setAdvanceMode(View view) {
        Intent intent = new Intent(this, PlayerData2.class);
        //EditText editText = (EditText) findViewById(R.id.editText);
        // String message = editText.getText().toString();
        intent.putExtra(EXTRA_MESSAGE, "AdvanceMode");
        startActivity(intent);
    }




}
