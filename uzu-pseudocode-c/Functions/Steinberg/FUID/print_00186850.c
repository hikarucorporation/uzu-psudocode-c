// Function : print
// Namespace: Steinberg:FUID
// Entry    : 00186850
// Prototype: undefined print(FUID * this, undefined8 param_2_00, char * param_2, size_t param_3)
// Body     : 00186850 - 00186906


/* Steinberg::FUID::print(int, char*, unsigned long) const */

void __thiscall
Steinberg::FUID::print(FUID *this,undefined8 param_2_00,char *param_2,size_t param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *__format;
  int iVar5;
  char local_88 [128];
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    print(this,param_2_00,local_88,0x80);
    fprintf(*(FILE **)PTR_stdout_00715898,"%s\n",local_88);
    return;
  }
  uVar1 = *(uint *)(this + 8);
  uVar2 = *(uint *)(this + 0xc);
  uVar3 = *(uint *)(this + 0x10);
  uVar4 = *(uint *)(this + 0x14);
  iVar5 = (int)param_2_00;
  if (iVar5 == 2) {
    __format = "FUID (0x%08X, 0x%08X, 0x%08X, 0x%08X)";
  }
  else if (iVar5 == 1) {
    __format = "DECLARE_UID (0x%08X, 0x%08X, 0x%08X, 0x%08X)";
  }
  else if (iVar5 == 0) {
    __format = "INLINE_UID (0x%08X, 0x%08X, 0x%08X, 0x%08X)";
  }
  else {
    __format = "DECLARE_CLASS_IID (Interface, 0x%08X, 0x%08X, 0x%08X, 0x%08X)";
  }
  snprintf(param_2,param_3,__format,
           (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18),
           (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18),
           (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18),
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
  return;
}


