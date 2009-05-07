/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2009 PrismTech
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE
 *
 *   for full copyright notice and license terms.
 *
 */
#ifndef SACPP_DEFAULTVALUEREFCOUNTBASE_H 
#define SACPP_DEFAULTVALUEREFCOUNTBASE_H

#include "sacpp_ValueBase.h"
#include "sacpp_Counter.h"

namespace DDS
{
   class DefaultValueRefCountBase: public virtual ValueBase
   {
      public:
         virtual ValueBase* _add_ref ();

         virtual void _remove_ref ();

         virtual ULong _refcount_value ();

      protected:
         DefaultValueRefCountBase ();

         virtual ~DefaultValueRefCountBase () {}

      private:
         DDS_DCPS_Counter m_count;
   };
}

#endif /* SACPP_DEFAULTVALUEREFCOUNTBASE_H */
