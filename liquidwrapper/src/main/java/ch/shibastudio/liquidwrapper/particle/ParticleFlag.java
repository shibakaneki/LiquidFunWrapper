package ch.shibastudio.liquidwrapper.particle;

/**
 * Created by shibakaneki on 27.11.17.
 */

public final class ParticleFlag {
	public final static int waterParticle = 0;
	public final static int zombieParticle = (1 << 1);
	public final static int wallParticle = (1 << 2);
	public final static int springParticle = (1 << 3);
	public final static int elasticParticle = (1 << 4);
	public final static int viscousParticle = (1 << 5);
	public final static int powderParticle = (1 << 6);
	public final static int tensileParticle = (1 << 7);
	public final static int colorMixingParticle = (1 << 8);
	public final static int destructionListenerParticle = (1 << 9);
	public final static int barrierParticle = (1 << 10);
	public final static int staticPressureParticle = (1 << 11);
	public final static int reactiveParticle = (1 << 12);
	public final static int repulsiveParticle = (1 << 13);
	public final static int fixtureContactListenerParticle = (1 << 14);
	public final static int particleContactListenerParticle = (1 << 15);
	public final static int fixtureContactFilterParticle = (1 << 16);
	public final static int particleContactFilterParticle = (1 << 17);
}
