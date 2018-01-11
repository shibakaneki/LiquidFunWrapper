package ch.shibastudio.liquidwrapper.collision.shapes;

/**
 * Created by shibakaneki on 05.12.17.
 */

public enum ShapeType {
	circle(0),
	edge(1),
	polygon(2),
	chain(3);

	private final int value;

	ShapeType(){
		this.value = 0;
	}

	ShapeType(int value){
		this.value = value;
	}
}
