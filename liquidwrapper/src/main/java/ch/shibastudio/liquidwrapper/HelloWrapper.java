package ch.shibastudio.liquidwrapper;

/**
 * Created by shibakaneki on 27.11.17.
 */

public class HelloWrapper {

	public HelloWrapper(){}

	/**
	 * A native method that is implemented by the 'native-lib' native library,
	 * which is packaged with this application.
	 */
	public native String stringFromJNI();
}
