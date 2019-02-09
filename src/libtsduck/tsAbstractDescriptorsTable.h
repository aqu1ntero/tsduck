//----------------------------------------------------------------------------
//
// TSDuck - The MPEG Transport Stream Toolkit
// Copyright (c) 2005-2019, Thierry Lelegard
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
// THE POSSIBILITY OF SUCH DAMAGE.
//
//----------------------------------------------------------------------------
//!
//!  @file
//!  Base class for MPEG tables containing only a list of descriptors.
//!
//----------------------------------------------------------------------------

#pragma once
#include "tsAbstractLongTable.h"
#include "tsDescriptorList.h"

namespace ts {
    //!
    //! Base class for MPEG tables containing only a list of descriptors (eg. CAT, TSDT).
    //! @ingroup table
    //!
    class TSDUCKDLL AbstractDescriptorsTable : public AbstractLongTable
    {
    public:
        DescriptorList descs; //!< List of descriptors.

        // Inherited methods
        virtual void serialize(BinaryTable&, const DVBCharset* = nullptr) const override;
        virtual void deserialize(const BinaryTable&, const DVBCharset* = nullptr) override;
        virtual void buildXML(xml::Element*) const override;
        virtual void fromXML(const xml::Element*) override;
        DeclareDisplaySection();

    protected:
        //!
        //! Table_id extension.
        //! When unused (CAT, TSDT), it must be left to the default value 0xFFFF.
        //!
        uint16_t _tid_ext;

        //!
        //! Constructor for subclasses.
        //! @param [in] tid Table id.
        //! @param [in] xml_name Table name, as used in XML structures.
        //! @param [in] tid_ext Table id extension.
        //! @param [in] version Table version number.
        //! @param [in] is_current True if table is current, false if table is next.
        //!
        AbstractDescriptorsTable(TID tid, const UChar* xml_name, uint16_t tid_ext, uint8_t version, bool is_current);

        //!
        //! Copy constructor.
        //! @param [in] other Other instance to copy.
        //!
        AbstractDescriptorsTable(const AbstractDescriptorsTable& other);

        //!
        //! Assignment operator.
        //! @param [in] other Other instance to copy.
        //! @return A reference to this object.
        //!
        AbstractDescriptorsTable& operator=(const AbstractDescriptorsTable& other) = default;

        //!
        //! Constructor from a binary table.
        //! @param [in] tid Table id.
        //! @param [in] xml_name Table name, as used in XML structures.
        //! @param [in] table Binary table to deserialize.
        //! @param [in] charset If not zero, character set to use without explicit table code.
        //!
        AbstractDescriptorsTable(TID tid, const UChar* xml_name, const BinaryTable& table, const DVBCharset* charset = nullptr);

    private:
        AbstractDescriptorsTable() = delete;
    };
}
