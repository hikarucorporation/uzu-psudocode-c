// Function : do_parse_creationmode
// Namespace: 
// Entry    : 0057d310
// Prototype: uint do_parse_creationmode(int * param_1)
// Body     : 0057d310 - 0057d3a2


uint do_parse_creationmode(int *param_1)

{
  char *__s1;
  int iVar1;
  char *in_RAX;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  char *local_18;
  
  uVar4 = 0xffffffff;
  if (*param_1 == 2) {
    local_18 = in_RAX;
    puVar2 = (undefined8 *)atom_getsymbol(param_1);
    __s1 = (char *)*puVar2;
    iVar1 = strncmp(__s1,"0o",2);
    if (iVar1 == 0) {
      iVar1 = 8;
    }
    else {
      iVar1 = strncmp(__s1,"0x",2);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      iVar1 = 0x10;
    }
    lVar3 = strtol(__s1 + 2,&local_18,iVar1);
    uVar4 = -(uint)(*local_18 != '\0') | (uint)lVar3;
  }
  else if (*param_1 == 1) {
    fVar5 = (float)atom_getfloat(param_1);
    uVar4 = (uint)fVar5;
  }
  return uVar4;
}


