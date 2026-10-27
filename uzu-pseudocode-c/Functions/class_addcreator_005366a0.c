// Function : class_addcreator
// Namespace: 
// Entry    : 005366a0
// Prototype: undefined class_addcreator(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, int param_11, undefined8 param_12, char * param_13, undefined8 param_14, uint param_15, uint param_16, uint param_17, uint param_18, uint param_19, uint param_20)
// Body     : 005366a0 - 0053695b


/* WARNING: Removing unreachable block (ram,0x0053680a) */
/* WARNING: Removing unreachable block (ram,0x00536782) */
/* WARNING: Removing unreachable block (ram,0x0053679d) */
/* WARNING: Removing unreachable block (ram,0x005367b8) */
/* WARNING: Removing unreachable block (ram,0x005367cf) */
/* WARNING: Removing unreachable block (ram,0x005367ea) */
/* WARNING: Removing unreachable block (ram,0x00536852) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff60 : 0x00536835 */
/* WARNING: Removing unreachable block (ram,0x00536872) */
/* WARNING: Removing unreachable block (ram,0x005368ad) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void class_addcreator(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,int *param_10,int param_11,undefined8 param_12,char *param_13,
                     undefined8 param_14,uint param_15,uint param_16,uint param_17,uint param_18,
                     uint param_19,uint param_20)

{
  char in_AL;
  uint *puVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  int local_e8 [14];
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  uVar4 = (undefined4)param_1;
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  if (param_11 == 0) {
    lVar2 = 0;
  }
  else {
    local_b0._0_4_ = (uint)param_12;
    if ((uint)local_b0 == 0) {
      puVar1 = (uint *)0x20;
      bVar3 = false;
      lVar2 = 1;
    }
    else {
      local_a8._0_4_ = (uint)param_13;
      if ((uint)local_a8 == 0) {
        local_e8[1] = (uint)local_b0;
        puVar1 = (uint *)0x28;
        lVar2 = 2;
        bVar3 = false;
      }
      else {
        puVar1 = (uint *)&DAT_00000030;
        if ((int)local_a0 == 0) {
          local_e8[1] = (uint)local_b0;
          local_e8[2] = (uint)local_a8;
          lVar2 = 3;
          bVar3 = false;
        }
        else {
          puVar1 = (uint *)&DAT_00000030;
          local_e8[3] = (int)local_a0;
          if (param_15 == 0) {
            local_e8[1] = (uint)local_b0;
            local_e8[2] = (uint)local_a8;
            lVar2 = 4;
            bVar3 = false;
          }
          else {
            puVar1 = &param_17;
            local_e8[2] = (uint)local_a8;
            local_e8[1] = (uint)local_b0;
            bVar3 = param_16 != 0;
            lVar2 = 5;
            local_e8[4] = param_15;
          }
        }
      }
    }
    local_e8[0] = param_11;
    if (bVar3) {
      if (param_10 == (int *)0x0) {
        uVar4 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                         "unnamed class: sorry: only %d creation args allowed",5,puVar1,param_13,
                         param_14);
      }
      else {
        uVar4 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                         "class %s: sorry: only %d creation args allowed",*(undefined8 *)param_10,5,
                         param_13,param_14);
      }
    }
  }
  local_e8[lVar2] = 0;
  class_addmethod(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)PTR_pd_objectmaker_00715510,param_9,param_10,local_e8[0],
                  (char *)(ulong)(uint)local_e8[1],(ulong)(uint)local_e8[2],local_e8[3]);
  return;
}


