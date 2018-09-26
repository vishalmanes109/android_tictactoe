package com.example.vishal.tictactoe;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class PlayerData3 extends AppCompatActivity {

    String playerdata[] =new String[5];
    private EditText player1Name,player2Name;
    public static String extra1,extra2;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_player_data3);
    }

    public void launchMode(View view) {
        Intent intent = new Intent(this, AngelsMode.class);

        EditText editText1 = (EditText) findViewById(R.id.name1);
        EditText editText2 = (EditText) findViewById(R.id.name2);
        String message1 = editText1.getText().toString();
        String message2 = editText2.getText().toString();

        Bundle extras = new Bundle();
        extras.putString("EXTRA_USERNAME1",message1);
        extras.putString("EXTRA_USERNAME2",message2);
        intent.putExtras(extras);

        startActivity(intent);

    }

}
