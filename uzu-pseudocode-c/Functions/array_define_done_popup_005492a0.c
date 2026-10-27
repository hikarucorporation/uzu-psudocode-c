// Function : array_define_done_popup
// Namespace: 
// Entry    : 005492a0
// Prototype: undefined array_define_done_popup(float param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 005492a0 - 0054933f


void array_define_done_popup
               (float param_1,undefined8 param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,undefined8 param_8,long param_9,undefined8 param_10,
               undefined8 param_11,undefined8 param_12,uint *param_13,uint *param_14)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  if (*(long **)(param_9 + 0x30) != (long *)0x0) {
    plVar2 = pd_checkglist(*(long **)(param_9 + 0x30));
    if (((plVar2 != (long *)0x0) && (plVar2 = (long *)plVar2[6], plVar2 != (long *)0x0)) &&
       (*plVar2 == *(long *)PTR_garray_class_00715780)) {
      iVar1 = (int)param_1;
      if (iVar1 == 2) {
        pcVar3 = (char *)class_gethelpname(*(long *)PTR_array_define_class_00715eb0);
        open_via_helppath(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,pcVar3,"");
        return;
      }
      if (iVar1 == 1) {
        puVar4 = gensym("arrayviewlistnew");
        pd_typedmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,plVar2,puVar4,0,(int *)0x0,param_13,param_14);
        return;
      }
      if (iVar1 == 0) {
        garray_properties(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)plVar2,param_10,extraout_RDX,
                          (int *)PTR_garray_class_00715780,(char *)param_13,param_14);
        return;
      }
    }
  }
  return;
}


