package ch.shibastudio.liquidwrapper.particle;

/**
 * Created by shibakaneki on 07.12.17.
 */

public class ParticleGroupFlag {
	public static int solidParticleGroup = (1 << 0);
	public static int rigidParticleGroup = (1 << 1);
	public static int particleGroupCanBeEmpty = (1 << 2);
	public static int particleGroupWillBeDestroyed = (1 << 3);
	public static int particleGroupNeedsUpdateDepth = (1 << 4);
	public static int particleGroupInternalMask = (particleGroupWillBeDestroyed | particleGroupNeedsUpdateDepth);
}
