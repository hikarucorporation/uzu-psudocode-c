// Function : mess_dispatch
// Namespace: 
// Entry    : 00537020
// Prototype: undefined mess_dispatch(undefined8 * param_1, undefined * UNRECOVERED_JUMPTABLE_00, int param_3, undefined8 * param_4, int param_5, undefined4 * param_6)
// Body     : 00537020 - 005375ab


void mess_dispatch(undefined8 *param_1,undefined *UNRECOVERED_JUMPTABLE_00,int param_3,
                  undefined8 *param_4,int param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  
  iVar3 = param_3 * 0x10 + param_5;
  if (param_1 != (undefined8 *)PTR_pd_objectmaker_00715510) {
    switch(iVar3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x0053704f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)();
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x0053707b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6);
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00537089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1]);
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x0053709d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2]);
      return;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x005370b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2],param_6[3]);
      return;
    case 5:
                    /* WARNING: Could not recover jumptable at 0x005370d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2],param_6[3],param_6[4]);
      return;
    case 6:
                    /* WARNING: Could not recover jumptable at 0x005370fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)
                (*param_6,param_6[1],param_6[2],param_6[3],param_6[4],param_6[5]);
      return;
    default:
      return;
    case 0x10:
                    /* WARNING: Could not recover jumptable at 0x00537103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_4);
      return;
    case 0x11:
                    /* WARNING: Could not recover jumptable at 0x0053710e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,*param_4);
      return;
    case 0x12:
                    /* WARNING: Could not recover jumptable at 0x0053711f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],*param_4);
      return;
    case 0x13:
                    /* WARNING: Could not recover jumptable at 0x00537136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2],*param_4);
      return;
    case 0x14:
                    /* WARNING: Could not recover jumptable at 0x00537153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2],param_6[3],*param_4);
      return;
    case 0x15:
                    /* WARNING: Could not recover jumptable at 0x00537176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)
                (*param_6,param_6[1],param_6[2],param_6[3],param_6[4],*param_4);
      return;
    case 0x20:
                    /* WARNING: Could not recover jumptable at 0x00537180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_4,param_4[1]);
      return;
    case 0x21:
                    /* WARNING: Could not recover jumptable at 0x0053718f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,*param_4,param_4[1]);
      return;
    case 0x22:
                    /* WARNING: Could not recover jumptable at 0x005371a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],*param_4,param_4[1]);
      return;
    case 0x23:
                    /* WARNING: Could not recover jumptable at 0x005371bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2],*param_4,param_4[1]);
      return;
    case 0x24:
                    /* WARNING: Could not recover jumptable at 0x005371e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)
                (*param_6,param_6[1],param_6[2],param_6[3],*param_4,param_4[1]);
      return;
    case 0x30:
                    /* WARNING: Could not recover jumptable at 0x005371ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_4,param_4[1],param_4[2]);
      return;
    case 0x31:
                    /* WARNING: Could not recover jumptable at 0x00537201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,*param_4,param_4[1],param_4[2]);
      return;
    case 0x32:
                    /* WARNING: Could not recover jumptable at 0x0053721a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],*param_4,param_4[1],param_4[2]);
      return;
    case 0x33:
                    /* WARNING: Could not recover jumptable at 0x00537239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)
                (*param_6,param_6[1],param_6[2],*param_4,param_4[1],param_4[2]);
      return;
    case 0x40:
                    /* WARNING: Could not recover jumptable at 0x0053724b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_4,param_4[1],param_4[2],param_4[3]);
      return;
    case 0x41:
                    /* WARNING: Could not recover jumptable at 0x00537262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,*param_4,param_4[1],param_4[2],param_4[3]);
      return;
    case 0x42:
                    /* WARNING: Could not recover jumptable at 0x0053727f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)
                (*param_6,param_6[1],*param_4,param_4[1],param_4[2],param_4[3]);
      return;
    case 0x50:
                    /* WARNING: Could not recover jumptable at 0x00537298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_4,param_4[1],param_4[2],param_4[3],param_4[4]);
      return;
    case 0x51:
                    /* WARNING: Could not recover jumptable at 0x005372b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)
                (*param_6,*param_4,param_4[1],param_4[2],param_4[3],param_4[4]);
      return;
    case 0x60:
                    /* WARNING: Could not recover jumptable at 0x005372d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)
                (*param_4,param_4[1],param_4[2],param_4[3],param_4[4],param_4[5]);
      return;
    }
  }
  uVar1 = 0;
  switch(iVar3) {
  case 0:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)();
    break;
  case 1:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6);
    break;
  case 2:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1]);
    break;
  case 3:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2]);
    break;
  case 4:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2],param_6[3]);
    break;
  case 5:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)
                      (*param_6,param_6[1],param_6[2],param_6[3],param_6[4]);
    break;
  case 6:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)
                      (*param_6,param_6[1],param_6[2],param_6[3],param_6[4],param_6[5]);
    break;
  case 0x10:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_4);
    break;
  case 0x11:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,*param_4);
    break;
  case 0x12:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],*param_4);
    break;
  case 0x13:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2],*param_4);
    break;
  case 0x14:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2],param_6[3],*param_4);
    break;
  case 0x15:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)
                      (*param_6,param_6[1],param_6[2],param_6[3],param_6[4],*param_4);
    break;
  case 0x20:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_4,param_4[1]);
    break;
  case 0x21:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,*param_4,param_4[1]);
    break;
  case 0x22:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],*param_4,param_4[1]);
    break;
  case 0x23:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],param_6[2],*param_4,param_4[1]);
    break;
  case 0x24:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)
                      (*param_6,param_6[1],param_6[2],param_6[3],*param_4,param_4[1]);
    break;
  case 0x30:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_4,param_4[1],param_4[2]);
    break;
  case 0x31:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,*param_4,param_4[1],param_4[2]);
    break;
  case 0x32:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,param_6[1],*param_4,param_4[1],param_4[2]);
    break;
  case 0x33:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)
                      (*param_6,param_6[1],param_6[2],*param_4,param_4[1],param_4[2]);
    break;
  case 0x40:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_4,param_4[1],param_4[2],param_4[3]);
    break;
  case 0x41:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)(*param_6,*param_4,param_4[1],param_4[2],param_4[3]);
    break;
  case 0x42:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)
                      (*param_6,param_6[1],*param_4,param_4[1],param_4[2],param_4[3]);
    break;
  case 0x50:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)
                      (*param_4,param_4[1],param_4[2],param_4[3],param_4[4]);
    break;
  case 0x51:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)
                      (*param_6,*param_4,param_4[1],param_4[2],param_4[3],param_4[4]);
    break;
  case 0x60:
    uVar1 = (*(code *)UNRECOVERED_JUMPTABLE_00)
                      (*param_4,param_4[1],param_4[2],param_4[3],param_4[4],param_4[5]);
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined8 *)(*plVar2 + 0x58) = uVar1;
  return;
}


