# -*- coding: utf-8 -*-
# Create your views here.

from django import forms
from django.template import RequestContext
from django.http import HttpResponse, HttpResponseRedirect
from django.template.loader import get_template
from django.core.paginator import Paginator
from django.core.urlresolvers import reverse

# app specific files

from models import *
from forms import *


def create_moneyflow(request):
    form = MoneyFlowForm(request.POST or None)
    if form.is_valid():
        form.save()
        form = MoneyFlowForm()

    t = get_template('jizhang/create_moneyflow.html')
    c = RequestContext(request,locals())
    return HttpResponse(t.render(c))



def list_moneyflow(request):
  
    list_items = MoneyFlow.objects.all()
    paginator = Paginator(list_items ,10)


    try:
        page = int(request.GET.get('page', '1'))
    except ValueError:
        page = 1

    try:
        list_items = paginator.page(page)
    except :
        list_items = paginator.page(paginator.num_pages)

    t = get_template('jizhang/list_moneyflow.html')
    c = RequestContext(request,locals())
    return HttpResponse(t.render(c))



def view_moneyflow(request, id):
    moneyflow_instance = MoneyFlow.objects.get(id = id)

    t=get_template('jizhang/view_moneyflow.html')
    c=RequestContext(request,locals())
    return HttpResponse(t.render(c))

def edit_moneyflow(request, id):

    moneyflow_instance = MoneyFlow.objects.get(id=id)

    form = MoneyFlowForm(request.POST or None, instance = moneyflow_instance)

    if form.is_valid():
        form.save()

    t=get_template('jizhang/edit_moneyflow.html')
    c=RequestContext(request,locals())
    return HttpResponse(t.render(c))


def test_moneyflow(request):
  
    t = get_template('jizhang/test.html')
    c = RequestContext(request,locals())
    return HttpResponse(t.render(c))
