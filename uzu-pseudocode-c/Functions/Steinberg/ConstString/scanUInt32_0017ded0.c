// Function : scanUInt32
// Namespace: Steinberg:ConstString
// Entry    : 0017ded0
// Prototype: ulong scanUInt32(ConstString * this, undefined4 * param_1, uint param_2, char param_3)
// Body     : 0017ded0 - 0017dfa6


/* Steinberg::ConstString::scanUInt32(unsigned int&, unsigned int, bool) const */

ulong __thiscall
Steinberg::ConstString::scanUInt32(ConstString *this,undefined4 *param_1,uint param_2,char param_3)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 in_RAX;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 local_28;
  
  local_28._0_4_ = (undefined4)in_RAX;
  puVar9 = &local_28;
  lVar4 = *(long *)(this + 8);
  puVar8 = (undefined1 *)0x0;
  if (lVar4 != 0) {
    uVar10 = *(uint *)(this + 0x10) & 0x3fffffff;
    if ((uVar10 != 0) && (param_2 < uVar10)) {
      uVar7 = (ulong)param_2;
      if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
        lVar2 = lVar4 + uVar7;
        cVar3 = *(char *)(lVar4 + uVar7);
        uVar5 = in_RAX;
        if (param_3 == '\0') {
          if (cVar3 != '\0') {
            puVar9 = (undefined8 *)0x0;
            iVar6 = __isoc99_sscanf(lVar2,&DAT_005db3a1,&local_28);
            puVar8 = (undefined1 *)puVar9;
            if (iVar6 == 1) {
LAB_0017df8d:
              *param_1 = (undefined4)local_28;
              puVar8 = (undefined1 *)CONCAT71((int7)((ulong)puVar9 >> 8),1);
            }
            goto LAB_0017df9a;
          }
        }
        else {
          while (local_28 = uVar5, cVar3 != '\0') {
            iVar6 = __isoc99_sscanf(lVar2,&DAT_005db3a1,&local_28);
            if (iVar6 == 1) goto LAB_0017df8d;
            pcVar1 = (char *)(lVar2 + 1);
            lVar2 = lVar2 + 1;
            uVar5 = local_28;
            cVar3 = *pcVar1;
          }
        }
        puVar8 = (undefined1 *)0x0;
      }
      else {
        uVar7 = scanUInt64_16((short *)(lVar4 + uVar7 * 2),&local_28,param_3);
        puVar8 = (undefined1 *)(uVar7 & 0xffffffff);
        if ((char)uVar7 != '\0') {
          *param_1 = (undefined4)local_28;
        }
      }
    }
  }
LAB_0017df9a:
  return (ulong)puVar8 & 0xffffffff;
}


