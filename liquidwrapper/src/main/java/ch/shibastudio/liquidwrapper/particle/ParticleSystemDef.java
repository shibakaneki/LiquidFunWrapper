package ch.shibastudio.liquidwrapper.particle;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;

/**
 * Created by shibakaneki on 27.11.17.
 */

public class ParticleSystemDef extends AbstractNativeObject {
	public ParticleSystemDef(){
		super(LiquidWrapperJNI.ParticleSystemDef_new());
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			LiquidWrapperJNI.ParticleSystemDef_delete(super.getPtr());
			super.deletePtr();
		}
	}

	/**
	 * Sets the particles density.
	 * @param density as the particles density.
	 */
	public void setDensity(float density){
		LiquidWrapperJNI.ParticleSystemDef_setDensity(super.getPtr(), density);
	}

	/**
	 * Gets the particles density.
	 * @return the particles density.
	 */
	public float getDensity(){
		return LiquidWrapperJNI.ParticleSystemDef_getDensity(super.getPtr());
	}

	/**
	 * Sets the particles gravity scale.
	 * @param gravityScale as the particles gravity scale.
	 */
	public void setGravityScale(float gravityScale){
		LiquidWrapperJNI.ParticleSystemDef_setGravityScale(super.getPtr(), gravityScale);
	}

	/**
	 * Gets the particles gravity scale.
	 * @return the particles gravity scale.
	 */
	public float getGravityScale(){
		return LiquidWrapperJNI.ParticleSystemDef_getGravityScale(super.getPtr());
	}

	/**
	 * Sets the particles radius.
	 * @param radius as the particles radius.
	 */
	public void setRadius(float radius){
		LiquidWrapperJNI.ParticleSystemDef_setRadius(super.getPtr(), radius);
	}

	/**
	 * Gets the particles radius.
	 * @return the particles radius.
	 */
	public float getRadius(){
		return LiquidWrapperJNI.ParticleSystemDef_getRadius(super.getPtr());
	}

	/**
	 * Sets the particles max count.
	 * @param maxCount as the particles max count.
	 */
	public void setMaxCount(int maxCount){
		LiquidWrapperJNI.ParticleSystemDef_setMaxCount(super.getPtr(), maxCount);
	}

	/**
	 * Gets the particles max count.
	 * @return the particles max count.
	 */
	public int getMaxCount(){
		return LiquidWrapperJNI.ParticleSystemDef_getMaxCount(super.getPtr());
	}

	/**
	 * Sets the particles pressure strength.
	 * @param strength as the particles pressure strength.
	 */
	public void setPressureStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setPressureStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles pressure strength.
	 * @return the particles pressure strength.
	 */
	public float getPressureStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getPressureStrength(super.getPtr());
	}

	/**
	 * Sets the particles damping strength.
	 * @param strength as the particles damping strength.
	 */
	public void setDampingStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setDampingStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles damping strength.
	 * @return the particles damping strength.
	 */
	public float getDampingStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getDampingStrength(super.getPtr());
	}

	/**
	 * Sets the particles elastic strength.
	 * @param strength as the particles elastic strength.
	 */
	public void setElasticStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setElasticStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles elastic strength.
	 * @return the particles elastic strength.
	 */
	public float getElasticStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getElasticStrength(super.getPtr());
	}

	/**
	 * Sets the particles spring strength.
	 * @param strength as the particles spring strength.
	 */
	public void setSpringStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setSpringStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles spring strength.
	 * @return the particles spring strength.
	 */
	public float getSpringStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getSpringStrength(super.getPtr());
	}

	/**
	 * Sets the particles viscous strength.
	 * @param strength as the particles viscous strength.
	 */
	public void setViscousStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setViscousStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles viscous strength.
	 * @return the particles viscous strength.
	 */
	public float getViscousStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getViscousStrength(super.getPtr());
	}

	/**
	 * Sets the particles surface tension pressure strength.
	 * @param strength as the particles surface tension pressure strength.
	 */
	public void setSurfaceTensionPressureStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setSurfaceTensionPressureStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles surface tension pressure strength.
	 * @return the particles surface tension pressure strength.
	 */
	public float getSurfaceTensionPressureStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getSurfaceTensionPressureStrength(super.getPtr());
	}

	/**
	 * Sets the particles surface tension normal strength.
	 * @param strength as the particles surface tension normal strength.
	 */
	public void setSurfaceTensionNormalStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setSurfaceTensionNormalStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles surface tension normal strength.
	 * @return the particles surface tension normal strength.
	 */
	public float getSurfaceTensionNormalStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getSurfaceTensionNormalStrength(super.getPtr());
	}

	/**
	 * Sets the particles repulsive strength.
	 * @param strength as the particles repulsive strength.
	 */
	public void setRepulsiveStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setRepulsiveStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles repulsive strength.
	 * @return the particles repulsive strength.
	 */
	public float getRepulsiveStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getRepulsiveStrength(super.getPtr());
	}

	/**
	 * Sets the particles powder strength.
	 * @param strength as the particles powder strength.
	 */
	public void setPowderStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setPowderStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles powder strength.
	 * @return the particles powder strength.
	 */
	public float getPowderStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getPowderStrength(super.getPtr());
	}

	/**
	 * Sets the particles ejection strength.
	 * @param strength as the particles ejection strength.
	 */
	public void setEjectionStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setEjectionStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles ejection strength.
	 * @return the particles ejection strength.
	 */
	public float getEjectionStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getEjectionStrength(super.getPtr());
	}

	/**
	 * Sets the particles static pressure strength.
	 * @param strength as the particles static pressure strength.
	 */
	public void setStaticPressureStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setStaticPressureStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles static pressure strength.
	 * @return the particles static pressure strength.
	 */
	public float getStaticPressureStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getStaticPressureStrength(super.getPtr());
	}

	/**
	 * Sets the particles static pressure relaxation.
	 * @param relaxation as the particles static pressure relaxation.
	 */
	public void setStaticPressureRelaxation(float relaxation){
		LiquidWrapperJNI.ParticleSystemDef_setStaticPressureRelaxation(super.getPtr(), relaxation);
	}

	/**
	 * Gets the particles static pressure relaxation.
	 * @return the particles static pressure relaxation.
	 */
	public float getStaticPressureRelaxation(){
		return LiquidWrapperJNI.ParticleSystemDef_getStaticPressureRelaxation(super.getPtr());
	}

	/**
	 * Sets the particles static pressure iterations..
	 * @param iterations as the particles static pressure iterations.
	 */
	public void setPressureStrength(int iterations){
		LiquidWrapperJNI.ParticleSystemDef_setStaticPressureIterations(super.getPtr(), iterations);
	}

	/**
	 * Gets the particles static pressure iterations.
	 * @return the particles static pressure iterations.
	 */
	public int getStaticPressureIterations(){
		return LiquidWrapperJNI.ParticleSystemDef_getStaticPressureIterations(super.getPtr());
	}

	/**
	 * Sets the particles color mixing strength.
	 * @param strength as the particles color mixing strength.
	 */
	public void setColorMixingStrength(float strength){
		LiquidWrapperJNI.ParticleSystemDef_setColorMixingStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the particles color mixing strength.
	 * @return the particles color mixing strength.
	 */
	public float getColorMixingStrength(){
		return LiquidWrapperJNI.ParticleSystemDef_getColorMixingStrength(super.getPtr());
	}

	/**
	 * Sets an indicator whether the particles must be destroyed by age.
	 * @param destroyByAge as an indicator whether the particles must be destroyed by age.
	 */
	public void setDestroyByAge(boolean destroyByAge){
		LiquidWrapperJNI.ParticleSystemDef_setDestroyByAge(super.getPtr(), destroyByAge);
	}

	/**
	 * Gets an indication whether the particles are destroyed by age.
	 * @return true if the particles are destroyed by age; otherwise false.
	 */
	public boolean isDestroyByAge(){
		return LiquidWrapperJNI.ParticleSystemDef_isDestroyByAge(super.getPtr());
	}

	/**
	 * Sets the particles lifetime granularity.
	 * @param granularity as the particles lifetime granularity.
	 */
	public void setLifetimeGranularity(float granularity){
		LiquidWrapperJNI.ParticleSystemDef_setLifetimeGranularity(super.getPtr(), granularity);
	}

	/**
	 * Gets the particles lifetime granularity.
	 * @return the particles lifetime granularity.
	 */
	public float getLifetimeGranularity(){
		return LiquidWrapperJNI.ParticleSystemDef_getLifetimeGranularity(super.getPtr());
	}
}
