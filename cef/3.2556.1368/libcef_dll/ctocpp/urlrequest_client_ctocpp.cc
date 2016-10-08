// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/auth_callback_cpptoc.h"
#include "libcef_dll/cpptoc/urlrequest_cpptoc.h"
#include "libcef_dll/ctocpp/urlrequest_client_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefURLRequestClientCToCpp::OnRequestComplete(
    CefRefPtr<CefURLRequest> request) {
  cef_urlrequest_client_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_request_complete))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return;

  // Execute
  _struct->on_request_complete(_struct,
      CefURLRequestCppToC::Wrap(request));
}

void CefURLRequestClientCToCpp::OnUploadProgress(
    CefRefPtr<CefURLRequest> request, int64 current, int64 total) {
  cef_urlrequest_client_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_upload_progress))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return;

  // Execute
  _struct->on_upload_progress(_struct,
      CefURLRequestCppToC::Wrap(request),
      current,
      total);
}

void CefURLRequestClientCToCpp::OnDownloadProgress(
    CefRefPtr<CefURLRequest> request, int64 current, int64 total) {
  cef_urlrequest_client_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_download_progress))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return;

  // Execute
  _struct->on_download_progress(_struct,
      CefURLRequestCppToC::Wrap(request),
      current,
      total);
}

void CefURLRequestClientCToCpp::OnDownloadData(CefRefPtr<CefURLRequest> request,
    const void* data, size_t data_length) {
  cef_urlrequest_client_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_download_data))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return;
  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return;

  // Execute
  _struct->on_download_data(_struct,
      CefURLRequestCppToC::Wrap(request),
      data,
      data_length);
}

bool CefURLRequestClientCToCpp::GetAuthCredentials(bool isProxy,
    const CefString& host, int port, const CefString& realm,
    const CefString& scheme, CefRefPtr<CefAuthCallback> callback) {
  cef_urlrequest_client_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_auth_credentials))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: host; type: string_byref_const
  DCHECK(!host.empty());
  if (host.empty())
    return false;
  // Verify param: scheme; type: string_byref_const
  DCHECK(!scheme.empty());
  if (scheme.empty())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;
  // Unverified params: realm

  // Execute
  int _retval = _struct->get_auth_credentials(_struct,
      isProxy,
      host.GetStruct(),
      port,
      realm.GetStruct(),
      scheme.GetStruct(),
      CefAuthCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval?true:false;
}


// CONSTRUCTOR - Do not edit by hand.

CefURLRequestClientCToCpp::CefURLRequestClientCToCpp() {
}

template<> cef_urlrequest_client_t* CefCToCpp<CefURLRequestClientCToCpp,
    CefURLRequestClient, cef_urlrequest_client_t>::UnwrapDerived(
    CefWrapperType type, CefURLRequestClient* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefURLRequestClientCToCpp,
    CefURLRequestClient, cef_urlrequest_client_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefURLRequestClientCToCpp,
    CefURLRequestClient, cef_urlrequest_client_t>::kWrapperType =
    WT_URLREQUEST_CLIENT;