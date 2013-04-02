from django.http import HttpResponse
from django.http import Http404
from django.shortcuts import render, get_object_or_404

from ppb.models import Price, Position

def index(request):
    all_price_list = Price.objects.all().order_by('id')
    context = {'all_price_list': all_price_list}
    return render(request, 'ppb/index.html', context)


