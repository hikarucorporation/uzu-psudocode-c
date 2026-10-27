// Function : libpd_bind
// Namespace: 
// Entry    : 004d7310
// Prototype: undefined libpd_bind(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004d7310 - 004d7331


void libpd_bind(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  
  sys_lock();
  puVar1 = gensym(param_9);
  uVar2 = sys_unlock();
  libpdreceive_new(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)puVar1,
                   param_10,extraout_RDX,param_12,param_13,param_14);
  return;
}


