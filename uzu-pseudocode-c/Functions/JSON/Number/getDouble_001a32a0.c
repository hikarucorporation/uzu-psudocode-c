// Function : getDouble
// Namespace: JSON:Number
// Entry    : 001a32a0
// Prototype: undefined8 getDouble(Number * this)
// Body     : 001a32a0 - 001a33ed


/* WARNING: Type propagation algorithm not settling */
/* JSON::Number::getDouble() const */

undefined8 __thiscall JSON::Number::getDouble(Number *this)

{
  uint uVar1;
  undefined1 *__src;
  char *******pppppppcVar2;
  ulong uVar3;
  ulong extraout_RAX;
  undefined8 uVar4;
  uint unaff_EBP;
  uint *unaff_R15;
  char *******local_58;
  char *******local_50;
  char *******local_48;
  char *******local_40 [2];
  double local_30;
  
  __src = (undefined1 *)**(undefined8 **)this;
  pppppppcVar2 = (char *******)(*(undefined8 **)this)[1];
  local_50 = (char *******)local_40;
  if ((__src == (undefined1 *)0x0) && (pppppppcVar2 != (char *******)0x0)) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  else {
    local_58 = pppppppcVar2;
    if ((char *******)0xf < pppppppcVar2) {
      local_50 = (char *******)std::__cxx11::string::_M_create((ulong *)&local_50,(ulong)&local_58);
      local_40[0] = local_58;
    }
    if (pppppppcVar2 != (char *******)0x0) {
      if (pppppppcVar2 == (char *******)0x1) {
        *(undefined1 *)local_50 = *__src;
      }
      else {
        memcpy(local_50,__src,(size_t)pppppppcVar2);
      }
    }
    pppppppcVar2 = local_50;
    local_48 = local_58;
    *(undefined1 *)((long)local_50 + (long)local_58) = 0;
    unaff_R15 = (uint *)__errno_location();
    unaff_EBP = *unaff_R15;
    *unaff_R15 = 0;
    local_30 = strtod((char *)pppppppcVar2,(char **)&local_58);
    if (local_58 != pppppppcVar2) {
      uVar1 = *unaff_R15;
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0) {
        *unaff_R15 = unaff_EBP;
joined_r0x001a3391:
        if ((char ********)local_50 != local_40) {
          operator_delete(local_50);
          uVar3 = extraout_RAX;
        }
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      if (uVar1 != 0x22) goto joined_r0x001a3391;
      goto LAB_001a33ad;
    }
  }
                    /* try { // try from 001a33a1 to 001a33b8 has its CatchHandler @ 001a33b9 */
  std::__throw_invalid_argument("stod");
LAB_001a33ad:
  uVar4 = std::__throw_out_of_range("stod");
                    /* catch() { ... } // from try @ 001a33a1 with catch @ 001a33b9 */
  if (*unaff_R15 == 0) {
    *unaff_R15 = unaff_EBP;
  }
  if ((char ********)local_50 == local_40) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar4);
  }
  operator_delete(local_50);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar4);
}


