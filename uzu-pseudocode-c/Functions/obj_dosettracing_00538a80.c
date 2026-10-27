// Function : obj_dosettracing
// Namespace: 
// Entry    : 00538a80
// Prototype: undefined obj_dosettracing(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00538a80 - 00538b52


void obj_dosettracing(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  void *pvVar1;
  undefined *puVar2;
  undefined8 in_RAX;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar5;
  undefined8 extraout_XMM0_Qa;
  
  puVar2 = PTR_backtracer_class_00715ba0;
  lVar5 = *(long *)(param_9 + 0x18);
  if (lVar5 != 0) {
    if ((int)param_10 == 0) {
      do {
        while ((pvVar1 = *(void **)(lVar5 + 0x10), pvVar1 == (void *)0x0 ||
               (plVar3 = *(long **)((long)pvVar1 + 8), *plVar3 != *(long *)puVar2))) {
          param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        "obj_dosettracing",param_10,param_11,param_12,param_13,param_14,(char)in_RAX
                       );
          lVar5 = *(long *)(lVar5 + 8);
          param_11 = extraout_RDX_00;
          if (lVar5 == 0) {
            return;
          }
        }
        freebytes(pvVar1);
        *(long *)(lVar5 + 0x10) = plVar3[1];
        param_10 = 0x18;
        param_1 = freebytes(plVar3);
        lVar5 = *(long *)(lVar5 + 8);
        param_11 = extraout_RDX_01;
      } while (lVar5 != 0);
    }
    else {
      do {
        plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long *)puVar2,param_10,param_11,param_12,param_13,param_14);
        plVar3[2] = param_9;
        plVar3[1] = *(long *)(lVar5 + 0x10);
        puVar4 = getbytes(0x10);
        *(undefined8 **)(lVar5 + 0x10) = puVar4;
        *puVar4 = 0;
        puVar4[1] = plVar3;
        lVar5 = *(long *)(lVar5 + 8);
        param_11 = extraout_RDX;
        param_1 = extraout_XMM0_Qa;
      } while (lVar5 != 0);
    }
  }
  return;
}


