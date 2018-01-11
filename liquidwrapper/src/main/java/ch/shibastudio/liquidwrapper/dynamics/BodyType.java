package ch.shibastudio.liquidwrapper.dynamics;

/**
 * Created by shibakaneki on 27.11.17.
 */

public enum BodyType {
	staticBody(0),
	kinematicBody,
	dynamicBody;

	private final int value;

	BodyType(){
		this.value = 0;
	}

	BodyType(int value){
		this.value = value;
	}
}
