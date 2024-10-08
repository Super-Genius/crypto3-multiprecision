///////////////////////////////////////////////////////////////////////////////
//  Copyright 2018 John Maddock. Distributed under the Boost
//  Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <nil/crypto3/multiprecision/detail/number_base.hpp>

namespace nil {
    namespace crypto3 {
        namespace multiprecision {
            namespace detail {

                template<class Backend>
                struct is_variable_precision : public std::integral_constant<bool, false> { };

                template<class Backend, expression_template_option ExpressionTemplates>
                struct is_variable_precision<number<Backend, ExpressionTemplates>>
                    : public is_variable_precision<Backend> { };

            }    // namespace detail
        }        // namespace multiprecision
    }            // namespace crypto3
}    // namespace nil
