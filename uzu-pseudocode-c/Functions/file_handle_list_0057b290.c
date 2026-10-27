// Function : file_handle_list
// Namespace: 
// Entry    : 0057b290
// Prototype: undefined file_handle_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0057b290 - 0057b36b


void file_handle_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,long param_10,undefined8 param_11,int *param_12,char *param_13,
                     undefined8 param_14)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  int *piVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 extraout_XMM0_Da;
  int iVar5;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Db_00;
  
  piVar4 = param_12;
  if (*(long *)(param_9 + 0x40) == 0) {
    iVar1 = **(int **)(param_9 + 0x38);
    iVar5 = (*(int **)(param_9 + 0x38))[1];
    uVar6 = param_11;
  }
  else {
    param_10 = *(long *)PTR_file_define_class_00715550;
    plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long *)(param_9 + 0x40),param_10);
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    if (plVar3 == (long *)0x0) {
      pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9,"file handle: couldn\'t find file-define \'%s\'",
               **(undefined8 **)(param_9 + 0x40),piVar4,param_13,param_14);
      return;
    }
    *(long **)(param_9 + 0x38) = plVar3 + 6;
    iVar1 = (int)plVar3[6];
    iVar5 = *(int *)((long)plVar3 + 0x34);
    uVar6 = extraout_RDX;
  }
  if (iVar1 < 0) {
    pcVar2 = "[soundfiler] write";
    if (iVar5 == 0) {
      pcVar2 = "[soundfiler] read";
    }
    uVar6 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     "\'%s\' without prior \'open\'",pcVar2 + 0xd,piVar4,param_13,param_14);
    outlet_bang(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x60));
    return;
  }
  if (iVar5 != 0) {
    file_handle_do_write
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               (uint)param_11,param_12,piVar4,param_13,param_14);
    return;
  }
  if (((uint)param_11 == 1) && (*param_12 == 1)) {
    iVar5 = atom_getfloat(param_12);
    file_handle_do_read(CONCAT44(extraout_XMM0_Db_00,iVar5),param_2,param_3,param_4,param_5,param_6,
                        param_7,param_8,param_9,param_10,extraout_RDX_00,(ulong)piVar4,param_13,
                        param_14);
    return;
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "no way to handle \'list\' messages while reading file",uVar6,piVar4,param_13,param_14);
  return;
}


