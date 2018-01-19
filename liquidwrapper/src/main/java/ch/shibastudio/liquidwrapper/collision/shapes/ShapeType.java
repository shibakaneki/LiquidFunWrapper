/**
 Copyright 2018 Clerc Didier

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */
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
