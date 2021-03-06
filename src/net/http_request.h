/* Aseprite
 * Copyright (C) 2001-2013  David Capello
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef NET_HTTP_REQUEST_H_INCLUDED
#define NET_HTTP_REQUEST_H_INCLUDED
#pragma once

#include "base/disable_copying.h"

#include <string>

namespace net {

class HttpHeaders;
class HttpRequestImpl;
class HttpResponse;

class HttpRequest
{
public:
  HttpRequest(const std::string& url);
  ~HttpRequest();

  void setHeaders(const HttpHeaders& headers);
  void send(HttpResponse& response);
  void abort();

private:
  HttpRequestImpl* m_impl;

  DISABLE_COPYING(HttpRequest);
};

} // namespace net

#endif
