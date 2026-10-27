// Function : operator<<
// Namespace: VST3:_anonymous_namespace_:IO:ByteOrderStream_1u_
// Entry    : 0019dc70
// Prototype: bool operator<<(ByteOrderStream<1u> * this, undefined1 * param_1)
// Body     : 0019dc70 - 0019dcbd


/* VST3::(anonymous namespace)::IO::Result VST3::(anonymous
   namespace)::IO::ByteOrderStream<1u>::TEMPNAMEPLACEHOLDERVALUE(unsigned int const&) */

bool __thiscall
VST3::(anonymous_namespace)::IO::ByteOrderStream<1u>::operator<<
          (ByteOrderStream<1u> *this,undefined1 *param_1)

{
  int iVar1;
  undefined8 local_8;
  
  local_8._0_4_ = CONCAT13(*param_1,CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]));
  local_8 = (ulong)(uint)local_8;
                    /* try { // try from 0019dc96 to 0019dca5 has its CatchHandler @ 0019dcbe */
  iVar1 = (**(code **)(*(long *)this + 0x20))(this,&local_8,4,(long)&local_8 + 4);
  return iVar1 != 0;
}


