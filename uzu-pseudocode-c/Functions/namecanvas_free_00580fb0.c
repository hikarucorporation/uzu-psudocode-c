// Function : namecanvas_free
// Namespace: 
// Entry    : 00580fb0
// Prototype: undefined namecanvas_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00580fb0 - 00580fc5


void namecanvas_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  if (*(char *)**(undefined8 **)(param_9 + 0x30) == '\0') {
    return;
  }
  pd_unbind(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
            *(long **)(param_9 + 0x38),*(undefined8 **)(param_9 + 0x30),param_11,param_12,param_13,
            param_14);
  return;
}


