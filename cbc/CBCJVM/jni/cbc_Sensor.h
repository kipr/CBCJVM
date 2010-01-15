/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cbc_Sensor */

#ifndef _Included_cbc_Sensor
#define _Included_cbc_Sensor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cbc_Sensor
 * Method:    digital
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_cbc_Sensor_digital
  (JNIEnv *, jobject, jint);

/*
 * Class:     cbc_Sensor
 * Method:    set_digital_output_value
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_cbc_Sensor_set_1digital_1output_1value
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     cbc_Sensor
 * Method:    analog10
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_cbc_Sensor_analog10
  (JNIEnv *, jobject, jint);

/*
 * Class:     cbc_Sensor
 * Method:    analog
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_cbc_Sensor_analog
  (JNIEnv *, jobject, jint);

/*
 * Class:     cbc_Sensor
 * Method:    accel_x
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_cbc_Sensor_accel_1x
  (JNIEnv *, jobject);

/*
 * Class:     cbc_Sensor
 * Method:    accel_y
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_cbc_Sensor_accel_1y
  (JNIEnv *, jobject);

/*
 * Class:     cbc_Sensor
 * Method:    accel_z
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_cbc_Sensor_accel_1z
  (JNIEnv *, jobject);

/*
 * Class:     cbc_Sensor
 * Method:    sonar
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_cbc_Sensor_sonar
  (JNIEnv *, jobject, jint);

/*
 * Class:     cbc_Sensor
 * Method:    sonar_inches
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_cbc_Sensor_sonar_1inches
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif