// Function : aiff_updateheader
// Namespace: 
// Entry    : 005a05d0
// Prototype: bool aiff_updateheader(int * param_1, uint param_2)
// Body     : 005a05d0 - 005a06f8


bool aiff_updateheader(int *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ssize_t sVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint local_44;
  long local_40;
  uint local_34;
  
  if (param_1[10] == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = (param_1[6] - 4U & 0xfffffffb) != 0;
  }
  uVar3 = sys_isbigendian();
  bVar8 = (int)uVar3 == 0;
  if (bVar7) {
    local_40 = 0x1a;
    lVar6 = 0xc;
  }
  else {
    local_40 = 0x34;
    lVar6 = 0x18;
    if ((param_1[6] != 4) && (param_1[6] != 8)) {
      local_40 = 0x2e;
    }
  }
  iVar1 = param_1[0xb];
  uVar5 = (uint)bVar8;
  local_34 = swap4(param_2,uVar5);
  sVar4 = fd_write(*param_1,lVar6 + 10,&local_34,4);
  bVar7 = false;
  if (3 < sVar4) {
    local_44 = swap4s(iVar1 * param_2 + 8,(uint)bVar8);
    lVar2 = local_40;
    sVar4 = fd_write(*param_1,local_40 + lVar6 + 4,&local_44,4);
    if (3 < sVar4) {
      local_44 = swap4s(iVar1 * param_2 + (int)lVar2 + (int)lVar6 + 8,uVar5);
      sVar4 = fd_write(*param_1,4,&local_44,4);
      bVar7 = 3 < sVar4;
    }
  }
  return bVar7;
}


