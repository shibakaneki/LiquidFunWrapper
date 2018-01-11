package ch.shibastudio.liquidfunwrapper;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;

import ch.shibastudio.liquidwrapper.dynamics.Body;
import ch.shibastudio.liquidwrapper.dynamics.BodyDef;
import ch.shibastudio.liquidwrapper.dynamics.World;

/**
 * Created by shibakaneki on 11.01.18.
 */

public class MainActivity extends AppCompatActivity{
	@Override
	protected void onCreate(Bundle savedInstanceState){
		super.onCreate(savedInstanceState);

		setContentView(R.layout.layout_main);

		// Load the libraries
		System.loadLibrary("liquidfun");
		System.loadLibrary("liquidwrapper");

		// Create some LiquidFun objects
		World world = new World(0.0f, 9.81f);
		BodyDef bodyDef = new BodyDef();
		bodyDef.setPosition(5, 5);
		Body testBody = world.createBody(bodyDef);

	}
}
